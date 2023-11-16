#include "main.h"
/**
 * print_unsigned_binary - print unsigned binary function
 * @args: format.
 * @length: length information.
 * Return: (NULL)r.
 */
int *print_unsigned_binary(va_list *args, struct Length *length)
{
	unsigned int n = va_arg(*args, unsigned int);
	unsigned int temp;
	int binary_digit;
	unsigned int divisor;

	if (n == 0)
	{
		_putchar('0');
		length->value++;
	}
	else
	{
		temp = n;
		divisor = 1;
		while (temp / divisor >= 2)
		{
			divisor *= 2;
		}

		while (divisor > 0)
		{
			binary_digit = temp / divisor;
			_putchar(binary_digit + '0');
			length->value++;
			temp %= divisor;
			divisor /= 2;
		}
	}

	return (0);
}
/**
 * print_unsigned_octal - print unsigned octal function
 * @args: format.
 * @length: length information.
 * Return: (0).
 */
int *print_unsigned_octal(va_list *args, struct Length *length)
{
	unsigned int n = va_arg(*args, unsigned int);
	unsigned int temp;
	unsigned int octal_digit;
	unsigned int divisor;

	if (n == 0)
	{
		_putchar('0');
		length->value++;
	}
	else
	{
		temp = n;

		divisor = 1;
		while (temp / divisor >= 8)
		{
			divisor *= 8;
		}
		while (divisor > 0)
		{
			octal_digit = temp / divisor;
			_putchar(octal_digit + '0');
			length->value++;
			temp %= divisor;
			divisor /= 8;
		}
	}

	return (0);
}
/**
 * print_unsigned_hexadecimal - print unsigned hexadecimal function
 * @args: format.
 * @length: length information.
 * Return: (0).
 */
int *print_unsigned_hexadecimal(va_list *args, struct Length *length)
{
	unsigned long n = va_arg(*args, unsigned long);
	unsigned int temp;
	unsigned int hex_digit;
	unsigned int divisor;

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
				if (length->UPERR_HEX)
					_putchar(hex_digit - 10 + 'A');
				else
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
 * print_unsigned_HEXADECIMAl - print unsigned HEXADECIMAl function
 * @args: format.
 * @length: length information.
 * Return: (0).
 */
int *print_unsigned_HEXADECIMAl(va_list *args, struct Length *length)
{
	length->UPERR_HEX = 1;
	print_unsigned_hexadecimal(args, length);
	length->UPERR_HEX = 0;
	return (0);
}
/**
 * print_address - print address function
 * @args: format.
 * @length: length information.
 * Return: (NULL).
 */

int *print_address(va_list *args, struct Length *length)
{
	void *addr = va_arg(*args, void *);
	uintptr_t address = (uintptr_t)addr;

	_putchar('0');
	_putchar('x');
	length->value += 2;

	if (address == 0)
	{
		_putchar('0');
		length->value++;
	}
	else
	{
		while (address > 0)
		{
			int digit = address % 16;
			char hex_char = (digit < 10) ? (digit + '0') : (digit - 10 + 'a');

			_putchar(hex_char);
			length->value++;
			address /= 16;
		}
	}
	return (0);
}
