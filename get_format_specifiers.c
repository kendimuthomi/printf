#include "main.h"
/**
 * get_format_specifiers - selects the right printing
 * function depending on the format specifier passed
 * to _printf
 * @s: character that holds the conversion specifier
 * Return: a pointer to the specific printing function
 */
int (*get_format_specifiers(char s)) (va_list args, flags_t *f)
{
	hp function_arr[] = {
		{'i', peint_int},
		{'s', print_string},
		{'c', print_char},
		{'d', print_int},
		{'u', print_unsigned},
		{'x', print_hex},
		{'X', print_hex_big},
		{'b', print_binary},
		{'o', print_octal},
		{'R', print_rot13},
		{'r', print_strrev},
		{'S', print_S},
		{'p', print_pointer},
		{'%', pint_percent},
		{NULL, NULL}
	};
	int flags = 15;

	register int i;

	for (i = 0; i < flags; i++)
		if (function_arr[i].c == s)
			return (function_arr[i].f);
	return (NULL);
}
