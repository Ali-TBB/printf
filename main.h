#ifndef PRINTF_H_

#define  PRINTF_H_

#include <stdio.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TYPE_SIMPLE 1
#define TYPE_LONG 2
#define TYPE_SHORT 3

/**
 * struct Length - Struct length
 * @value: length.
 */
struct Length
{
	int value;
};
/**
 * struct type_field - Struct printer
 * @tp: format code
 * @type_field: The handler function
 */
typedef struct type_field
{
char tp[1];
int *(*type_field)(va_list *args, struct Length *length);
} typ;

/* _printf.c */
int _printf(const char *format, ...);

/* _puts.c */
int _putchar(char c);
int _puts(char *str);
int _strlen(const char *str);

/* print_fun.c */
int *print_string(va_list *args, struct Length *length);
int *print_integr(va_list *args, struct Length *length);
int *print_char(va_list *args, struct Length *length);
int *print_unsigned_int(va_list *args, struct Length *length);
unsigned int custom_power(unsigned int base, int exponent);
int lenght_get(struct Length *length);

/* get_type.c */
int *(*get_type(char fc, int type))(va_list *args, struct Length *length);

#endif
