
#include "main.h"
/**
 * print_integr - print integr function
 * @args: format.
 * @length: length information.
 * Return:(0).
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

	return (0);
}

/**
 * print_l_integr - print long integer function
 * @args: format.
 * @length: length information.
 * Return: (0).
 */
int *print_l_integr(va_list *args, struct Length *length)
{
	long n = va_arg(*args, long);

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		length->value++;
	}

	if (n / 10 != 0)
	{
		print_l_integr(args, length);
	}

	_putchar(n % 10 + '0');
	length->value++;

	return (0);
}

/**
 * print_h_integr - print short integer function
 * @args: format.
 * @length: length information.
 * Return: (0).
 */
int *print_h_integr(va_list *args, struct Length *length)
{
	short n = va_arg(*args, int);

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		length->value++;
	}

	if (n / 10 != 0)
	{
		print_h_integr(args, length);
	}

	_putchar(n % 10 + '0');
	length->value++;

	return (0);
}
