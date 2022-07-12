#include "main.h"
/**
 * print_pointer - prints the address of an input
 * @args: va_list arguments
 * @f: pointer to the struct flags
 * Return: number of characters printed
 */
int print_pointer(va_list args, flags_t *f)
{
	char *str;
	unsigned long int p = va_arg(args, unsigned long int);

	register int count = 0;

	(void)f;

	if (!p)
		return (_puts("(nil)"));
	str = converter(p, 16, 1);
	count += _puts("0x");
	count += _puts(str);
	return (count);
}
/**
 * print_string - prints a string to stdout
 * @args: va_list arguments
 * @f: pointer to struct flags
 * Return: number of characters printed
 */
int print_string(va_list args, flags_t *f)
{
	char *str = va_arg(args, char *);
	(void)f;

	if (!str)
		str = "(null)";
	return (_puts(str));
}
/**
 * print_char - prints a character to stdout
 * @args: va_list arguments
 * @f: pointer to the struct flags
 * Return: number of characters printed
 */
int print_char(va_list args, flags_t *f)
{
	(void)f;

	_putchar(va_arg(args, int));
	return (1);
}
