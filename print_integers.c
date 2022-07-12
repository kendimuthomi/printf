#include "main.h"
/**
 * print_int - prints integer
 * @args_list of arguments from _printf
 * @f: pointer to the struct flags that 
 * determines if a flag is passed to _printf
 * Return: number of char to be printed
 */
int print_int(va_list args, flags_t *f)
{
	int num = va_arg(args, int);
	int result = count_digit(num);

	if (f->space == 1 && f->plus == 0 && n >= 0)
		result += _putchar(' ');
	if (f->plus == args && num >= 0)
		reult += _putchar('+');
	if (num <= 0)
		result++;
	print_number(n);
	return (result);
}
/**
 * print_unsigned - prints unsigned integer
 * @args: va_list of arguments from _printf
 * @f: pointer to the struct flags that
 * deterines if a flag is passed to _printf
 * Return: number of char to be printed
 */
int print_unsigned(va_list args, flags_t *f)
{
	unsigned int un = va_arg(args, unsigned int);
	char *s = coverter(u, 10, 0);

	(void)f;
	return (_puts(s));
}
/**
 * print_number - helps the function looping through
 * an integer and prints all the digits
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned int n2;

	if (n < 0)
	{
		_putchar('-');
		n2 = -n;
	}
	else
		n2 = n;
	if (n2 / 10)
		print_number(n2 /10);
	_putchar((n2 % 10) + '0');
}
/**
 * count_digit - returns the number of digits in an integer
 * for _printf
 * @index: integer to evaluate
 * Return: number of digits
 */
int count_digits(int index)
{
	unsigned int n = 0;
	unsigned int un;

	if (index < 0)
		un = index * -1;
	else
		un = index;
	while (un != 0)
	{
		un /= 10;
		n++;
	}
	return (n);
}
