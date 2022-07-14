#include "main.h"
/**
 * get_flag - turns on flags if _printf gets a flag
 * modifier in the format string
 * @s: character holding flag specifier
 * @f: pointer to struct flags in which we turn flags
 * on
 * Return: 1 if a flag has been turned on, 0 otherwise
 */
int get_flag(char s, flags_t *f)
{
	int index = 0;

	switch (s)
	{
		case '+':
			f->plus = 1;
			index = 1;
			break;
		case ' ':
			f->space = 1;
			index = 1;
			break;
		case '#':
			f->hash = 1;
			index = 1;
			break;
		case '0':
			f->zero = 1;
			index = 1;
			break;
		case '-':
			f->minus = 1;
			index = 1;
			break;
	}
	return (index);
}
/**
 * get_modifier - finds the modifier and invokes the corresponding function
 * @s: format string
 * @handler: modifier
 * Return: 1 if valid
 */
int get_modifier(char *s, flags_t *handler)
{
	int index = 0;

	switch (*s)
	{
		case 'h':
			handler->h_mode = 1;
			index = 1;
			break;
		case 'l':
			handler->l_mode = 1;
			index = 1;
			break;
	}
	return (index);
}
/**
 * get_width - gets width from a width specifier
 * @s: format string
 * @handler: modifier
 * @args: va_list argument
 * Return: string
 */
char *get_width(char *s, flags_t *handler, va_list args)
{
	int width = 0;

	if (*s == '*')
	{
		width = va_arg(args, int);
		s++;
	}
	else
	{
		while (*s >= 0 && *s <= 9)
		{
			width = width * 10 + (*s++ - '0');
		}
	}
	handler->width = width;
	return (s);
}
