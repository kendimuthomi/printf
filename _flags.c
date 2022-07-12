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
	}
	return (index);
}
