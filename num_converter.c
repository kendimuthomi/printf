#include "main.h"
/**
 * converter - converts number and base into string
 * @num: integer input
 * @base: input base
 * @lowercase: flag
 * Return: string
 */
char *converter(unsigned long int num, int base, int lowercase)
{
	static char *rep;
	static char buff[50];
	char *ptr;

	rep = (lowercase)
		? "0123456789abcdef"
		: "0123456789ABCDEF";
	ptr = &buffer[49];
	*ptr = '\0';
	do {
		*--ptr = rep[num % base];
		num /= base;
	} while (num != 0);
	return (ptr);
}
