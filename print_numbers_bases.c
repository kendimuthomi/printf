#include "main.h"
/**
 * print_hex - prints a number in hexadecimal base, in
 * lowercase
 * @args: va_list - arguments from _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Description: the function calls converter() that converts
 * the input number into correct base and returns as a string
 * Return: the number of char to be printed
 */
int print_hex(va_list args, flags_t *f)
{
	unsigned int n = va_arg(args, unsigned int);
	char *s = converter(n, 16, 1);
	int count = 0;

	if (f->hash == 1 && s[0] != '0')
		count += _puts("0x");
	count += _puts(s);
	return (count);
}
/**
 * print_hex_big - prints a number in hexadecimal base in
 * uppercase
 * @args: va_list arguments from _printf
 * @f: pointer to the struct that determines if a flag
 * is passed to _printf
 * Description: the function calls converter() that
 * converts the input number into the correct base
 * and returns it to string
 * Return: the number of char to be printed
 */
int print_hex_big(va_list args, flags_t *f)
{
	unsigned int n = va_arg(args, unsigned int);
	char *s = converter(n, 16, 0);
	int count = 0;

	if (f->hash == 1 && s[0] != '0')
		count += _puts("0X");
	count += _puts(s);
	return (count);
}
/**
 * print_binary - prints a number in base 2
 * @args: va_list arguments from _printf
 * @f: pointer to the struct that determines if
 * a flag is passed to _printf
 * Description: the function calls converter() that in
 * turns converts the input number into the correct base
 * and returns it as a string
 * Return: the number of char printed
 */
int print_binary(va_list args, flags_t *f)
{
	unsigned int n = va_arg(args, unsigned int);
	char *s = converter(n, 2, 0);

	(void)f;
	return (_puts(s));
}
/**
 * print_octal - prints a number in base 8
 * @args: va_list arguments from _printf
 * @f: pointer to the struct that determines
 * if a flag is passed to _printf
 * Description: the function calls converter() that converts
 * the input into correct base and returns it as a string
 * Return: the number of char printed
 */
int print_octal(va_list args, flags_t *f)
{
	unsigned int n = va_arg(args, unsigned int);
	char *s = converter(n, 8, 0);
	int count = 0;

	if (f->hash == 1 && s[0] != '0')
		count += _putchar('0');
	count += _puts(s);
	return (count);
}
