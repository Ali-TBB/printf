#include "main.h"
#include <endian.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
	int  a, len = 0, b, i;
	char str;
	typ _typ[] = {
		{"s", handle_string},
		{"c", handle_char},
		{"i", handle_integr},
		{"d", handle_integr},
	};
	va_list args;

	va_start(args, format);
	len = _strlen(format);
	for (i = 0; i < len; i++)
	{
		if (format[i] == '%')
		{
			str = format[i + 1];
			b = 0;
			a = 0;
			while (a < 4)
			{
				if (_typ[a].tp[0] == str)
				{
					b = 1;
					print_str(_typ[a].handler(&args));
					i++;
				}
				a++;
			}
			if (b != 1)
			{
				_putchar(format[i + 1]);
				i++;
			}
		}
		else if (format[i] != '\0')
			_putchar(format[i]);
	}
	va_end(args);
	return (len);
}
