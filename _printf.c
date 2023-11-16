#include "main.h"
/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
	int len = 0, i;
	va_list args;
	struct Length length = {0, 0};

	if (!format || (format[0] == '%' && !format[1]))
	{
		return (-1);
	}

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
			}
			else
			{
				get_type(format[i + 1], TYPE_SIMPLE)(&args, &length);
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			len++;
		}
	}

	len += length.value;

	va_end(args);
	return (len);
}
