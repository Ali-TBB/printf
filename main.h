#ifndef PRINTF_H_

#define  PRINTF_H_

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <unistd.h>


#define TYPE_SIMPLE 1
#define TYPE_LONG 2
#define TYPE_SHORT 3
/**
 * struct Length - Struct length
 * @value: length.
 * @UPERR_HEX: uperr hexa
 */
struct Length
{
	int value;
	int UPERR_HEX;
};
/**
 * struct type_field - Struct printer
 * @tp: format code
 * @type_field: The handler function
 */
typedef struct type_field
{
char *tp;
int *(*type_field)(va_list *args, struct Length *length);
} typ;

/* _printf.c */
int _printf(const char *format, ...);

/* _puts.c */
int _putchar(char c);
int _puts(char *str);
int _strlen(const char *str);

/* print_string.c */
int *print_string(va_list *args, struct Length *length);
int *print_char(va_list *args, struct Length *length);
int *print_h_char(va_list *args, struct Length *length);
int *print_custom_string(va_list *args, struct Length *length);
int *null_fun();

/* print_integr.c */
int *print_integr(va_list *args, struct Length *length);
int *print_l_integr(va_list *args, struct Length *length);
int *print_l_integr(va_list *args, struct Length *length);

/*print_type.c */
int *print_unsigned_int(va_list *args, struct Length *length);
int *print_unsigned_octal(va_list *args, struct Length *length);
int *print_unsigned_hexadecimal(va_list *args, struct Length *length);
int *print_unsigned_HEXADECIMAl(va_list *args, struct Length *length);
int *print_unsigned_binary(va_list *args, struct Length *length);
int *print_address(va_list *args, struct Length *length);

/* print_long_type.c */
int *print_l_unsigned_int(va_list *args, struct Length *length);
int *print_l_unsigned_octal(va_list *args, struct Length *length);
int *print_unsigned_l_hexadecimal(va_list *args, struct Length *length);
int *print_unsigned_l_HEXADECIMAl(va_list *args, struct Length *length);
/* print_short_type.c */
int *print_h_integr(va_list *args, struct Length *length);
int *print_h_unsigned_int(va_list *args, struct Length *length);
int *print_h_unsigned_octal(va_list *args, struct Length *length);
int *print_h_unsigned_hexadecimal(va_list *args, struct Length *length);
int *print_h_unsigned_HEXADECIMAl(va_list *args, struct Length *length);


/* get_type.c */
int *(*get_type(char fc, int type))(va_list *args, struct Length *length);

#endif
