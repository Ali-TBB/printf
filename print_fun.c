#include "main.h"
#include <math.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_string - print string function
 * @args: format.
 * @length: length information.
 * Return: (NULL).
 */
int *print_string(va_list *args, struct Length *length)
{
	char *str = va_arg(*args, char *);

	_puts(str);
	length->value += _strlen(str);
	return (0);
}

/**
 * print_char - print char function
 * @args: format.
 * @length: length inforemation.
 * Return: (NULL)r.
 */
int *print_char(va_list *args, struct Length *length)
{
	int ch = va_arg(*args, int);

	_putchar(ch);
	length->value++;
	return (NULL);
}

/**
 * print_integr - print integr function
 * @args: format.
 * @length: length information.
 * Return:(NULL).
 */
int *print_integr(va_list *args, struct Length *length)
{
	int n = va_arg(*args, int);
	int a, divisor = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		length->value++;
	}
	while (n / divisor >= 10)
	{
		divisor *= 10;
	}

	while (divisor > 0)
	{
		a = n / divisor;
		_putchar(a + '0');
		length->value++;
		n %= divisor;
		divisor /= 10;
	}

	return (NULL);
}

/**
 * print_unsigned_int - print unsigned int function
 * @args: format.
 * @length: length information.
 * Return: (NULL)r.
 */
int *print_unsigned_int(va_list *args, struct Length *length)
{
	unsigned int n = va_arg(*args, unsigned int);

	if (n == 0)
	{
		_putchar('0');
		length->value++;
	}
	else
	{
		unsigned int divisor = 1;
		unsigned int temp = n;

		while (temp >= 10)
		{
			temp /= 10;
			divisor *= 10;
		}

		while (divisor > 0)
		{
			_putchar((n / divisor) % 10 + '0');
			divisor /= 10;
			length->value++;
		}
	}

	return (NULL);
}
