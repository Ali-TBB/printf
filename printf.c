#include "printf.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * _printf-
 * @format
 * @param ...
 * Return: int
 */

int _printf(const char *format, ...)
{
	int i = 0;
	va_list args;

	va_start(args, format);

	while (format[i])
	{
		i++;
	}
  va_end(args);
  return (i);
}
