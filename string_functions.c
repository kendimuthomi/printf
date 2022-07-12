#include "main.h"
/**
 * print_S - prints the string
 * Description:Non printable characters (0 < ASCII value < 32 or >= 127)
 * are printed this way: \x, followed by the ASCII code value
 * in hexadecimal (upper case - always 2 characters)
 * @args: va_list arguments
 * @f: pointer to the struct flags
 * Return: number of characters printed
 */
int print_S(va_list args, flags_t *f)
{
	int index, count = 0;
	char *result;
	char *str = va_arg(args, char *);

	(void)f;

	if (!str)
		return (_puts("(null)"));
	for (index = 0; str[index]; index++)
	{
		if (str[index] > 0 && (str[index] < 32 || str[index] >= 127))
		{
			_puts("\\x");
			count += 2;
			result = converter(str[index], 16, 0);
			if (!result[1])
				count += _putchar('0');
			count += _puts(result);
		}
		else
			count += _putchar(str[index]);
	}
	return (count);
}
/**
 * print_strrev - prints a string in reverse
 * @args: va_list arguments
 * @f: pointer to the struct flags
 * Return: length of printed string
 */
int print_strrev(va_list args, flags_t *f)
{
	int index = 0, j;
	char *s = va_arg(args, char *);

	(void)f;
	if (!s)
		s = "(null)";
	while (s[index])
		index++;
	for (j = index - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	return (index);
}
/**
 * print_rot13 - prints a rot13 encrypted string
 * @args: va_list arguments
 * @f: pointer to the struct flags
 * Return: length of the printed string
 */
int print_rot13(va_list args, flags_t *f)
{
	int index, j;
	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *s = va_arg(args, char *);

	(void)f;
	for (index = 0; s[index]; index++)
	{
		if (s[index] < 'A' || (s[index] > 'Z' && s[index] < 'a') || s[index] > 'z')
			_putchar(s[index]);
		else
		{
			for (j = 0; j <= 52; j++)
			{
				if (s[index] == rot13[j])
					_putchar(ROT13[j]);
			}
		}
	}
	return (index);
}
/**
 * print_percent - prints the percentage sign
 * @args: va_list arguments
 * @f: pointer to the struct flags
 * Return: number of characters printed
 */
int print_percent(va_list args, flags_t *f)
{
	(void)f;
	(void)args;

	return (_putchar('%'));
}
