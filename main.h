#ifndef PRINTF_H_

#define  PRINTF_H_

#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...);
/**
 * struct type - Struct printer
 * @tp: format code
 * @handler: The handler function
 */
typedef struct type
{
char tp[1];
char *(*handler)(va_list *);
} typ;
int _putchar(char c);
int _strlen(const char *str);
void print_str(const char *str);
char *handle_string(va_list *args);
char *handle_integr(va_list *args);
char *handle_char(va_list *args);


#endif
