#include "main.h"
#include <unistd.h>
/**
 * _putchar - prints a character to stdout
 * @c: the character
 * Description: uses a local buffer of 1024 to call write
 * Return: 1 upon success,
 * On error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	static char buff[1024];
	static int i;

	if (c == -1 || i >= 1024)
	{
		write(1, &buff, i);
		i = 0;
	}
	if (c != -1)
	{
		buff[i] = c;
		i++;
	}
	return (1);
}
/**
 * _puts - prints a string to stdout
 * @s: the string
 * Return: number of characters printed
 */
int _puts(char *s)
{
	register int i;

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	return (i);
}
