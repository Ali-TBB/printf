#include "main.h"
/**
 * print_unsigned_int - print unsigned int function
 * @args: format.
 * @length: length information.
 * Return: (0).
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
	return (0);
}

/**
 * print_l_unsigned_int - print long unsigned integer function
 * @args: format.
 * @length: length information.
 * Return: (NULL).
 */
int *print_l_unsigned_int(va_list *args, struct Length *length)
{
	unsigned long n = va_arg(*args, unsigned long);
	unsigned long temp;

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
			temp /= 10;
			length->value++;
		}

		temp = n;
		while (temp > 0)
		{
			_putchar((temp % 10) + '0');
			temp /= 10;
		}
	}
	return (0);
}
/**
 * print_h_unsigned_int - print short unsigned int function
 * @args: format.
 * @length: length information.
 * Return: (0).
 */
int *print_h_unsigned_int(va_list *args, struct Length *length)
{
	unsigned short n = va_arg(*args, int);
	unsigned short temp = n;
	unsigned short divisor = 1;

	if (n == 0)
	{
		_putchar('0');
		length->value = 1;
	}
	else
	{
		while (temp / divisor >= 10)
		{
			divisor *= 10;
		}

		while (divisor > 0)
		{
			_putchar(temp / divisor + '0');
			length->value++;
			temp %= divisor;
			divisor /= 10;
		}
	}

	return (0);
}
