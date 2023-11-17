#include "main.h"
/**
 * print_h_unsigned_octal - print short unsigned octal function
 * @args: format.
 * @length: length information.
 * Return: (NULL).
 */
int *print_h_unsigned_octal(va_list *args, struct Length *length)
{
	unsigned short n = va_arg(*args, int);
	unsigned short temp;
	unsigned short octal_digit;

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

	return (NULL);
}

/**
 * print_h_unsigned_hexadecimal - print short unsigned hexadecimal function
 * @args: format.
 * @length: length information.
 * Return: (NULL).
 */
int *print_h_unsigned_hexadecimal(va_list *args, struct Length *length)
{
	unsigned short n = va_arg(*args, int);
	unsigned short temp;
	unsigned short hex_digit;
	unsigned short divisor;

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

	return (NULL);
}
/**
 * print_h_unsigned_HEXADECIMAl - print short unsigned hexadecimal function
 * @args: format.
 * @length: length information.
 * Return: (NULL).
 */
int *print_h_unsigned_HEXADECIMAl(va_list *args, struct Length *length)
{
	unsigned short n = va_arg(*args, int);
	unsigned short temp;
	unsigned short hex_digit;
	unsigned short divisor;

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

	return (NULL);
}
