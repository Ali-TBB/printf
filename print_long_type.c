#include "main.h"
/**
 * print_l_unsigned_octal - print long unsigned octal function
 * @args: format.
 * @length: length information.
 * Return: (0).
 */
int *print_l_unsigned_octal(va_list *args, struct Length *length)
{
	unsigned long n = va_arg(*args, unsigned long);
	unsigned long temp;
	unsigned long octal_digit;

	if (n == 0)
	{
		_putchar('0');
		length->value++;
	}
	else
	{
		temp = n;
		while (temp > 0)
		{
			temp /= 8;
			length->value++;
		}

		temp = n;
		while (temp > 0)
		{
			octal_digit = temp % 8;
			_putchar(octal_digit + '0');
			temp /= 8;
			length->value++;
		}
	}

	return (0);
}

/**
 * print_unsigned_l_hexadecimal - print long unsigned hexadecimal function
 * @args: format.
 * @length: length information.
 * Return: (0).
 */
int *print_unsigned_l_hexadecimal(va_list *args, struct Length *length)
{
	unsigned long n = va_arg(*args, unsigned long);
	unsigned long temp;
	unsigned long hex_digit;
	unsigned long divisor;

	if (n == 0)
	{
		_putchar('0');
		length->value++;
	}
	else
	{
		temp = n;
		divisor = 1;
		while (temp / divisor >= 16)
		{
			divisor *= 16;
		}

		while (divisor > 0)
		{
			hex_digit = temp / divisor;
			if (hex_digit < 10)
			{
				_putchar(hex_digit + '0');
			}
			else
			{
				_putchar(hex_digit - 10 + 'a');
			}
			length->value++;
			temp %= divisor;
			divisor /= 16;
		}
	}

	return (0);
}

/**
 * print_unsigned_l_HEXADECIMAl - print long unsigned hexadecimal function
 * @args: format.
 * @length: length information.
 * Return: (0).
 */
int *print_unsigned_l_HEXADECIMAl(va_list *args, struct Length *length)
{
	unsigned long n = va_arg(*args, unsigned long);
	unsigned long temp;
	unsigned long hex_digit;
	unsigned long divisor;

	if (n == 0)
	{
		_putchar('0');
		length->value++;
	}
	else
	{
		temp = n;
		divisor = 1;
		while (temp / divisor >= 16)
		{
			divisor *= 16;
		}

		while (divisor > 0)
		{
			hex_digit = temp / divisor;
			if (hex_digit < 10)
			{
				_putchar(hex_digit + '0');
			}
			else
			{
				_putchar(hex_digit - 10 + 'A');
			}
			length->value++;
			temp %= divisor;
			divisor /= 16;
		}
	}

	return (0);
}
