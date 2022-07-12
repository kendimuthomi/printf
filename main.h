#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdarg.h>
/**
 * struct flags - struct that contains flags to turn on
 * when a flag specifier is passed to _printf()
 * @plus: flag for the '+' character
 * @space: flag for the ' ' character
 * @hash: flag for the '#' character
 */
typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;
/**
 * struct handlePrint - struct to choose the right function
 * depending on the format specfier passed to _printf()
 * @c: format specifier
 * @f: pointer to the correct priting function
 */
typedef struct handlePrint
{
	char c;
	int (*f)(va_list ap, flags_t *f);
} hp;
/* print_integers*/
int print_int(va_list args, flags_t *f);
void print_number(int n);
int print_unsigned(va_list args, flags_t *f);
int count_digit(int index);
/* print_numbers_bases */
int print_hex(va_list args, flags_t *f);
int print_hex_big(va_list args, flags_t *f);
int print_binary(va_list args, flags_t *f);
int print_octal(va_list args, flags_t *f);
/* converter */
char *converter(unsigned long int num, int base, int lowercase);
/* _printf */
int _printf(const char *format, ...);
/* get_format_specifier */
int (*get_format_specifiers(char s))(va_list, flags_t *);
/* get_flag */
int get_flag(char s, flags_t *f);
/* print_alpha */
int print_string(va_list args, flags_t *f);
int print_char(va_list args, flags_t *f);
/* _write */
int _putchar(char c);
int _puts(char *s);
/* print_custom */
int print_rot13(va_list args, flags_t *f);
int print_strrev(va_list args, flags_t *f);
int print_S(va_list args, flags_t *f);
/* print_pointer */
int print_pointer(va_list args, flags_t *f);
/* print_percent */
int print_percent(va_list args, flags_t *f);
#endif
