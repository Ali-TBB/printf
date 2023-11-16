#include "main.h"


/**
 * print_string - print string function
 * @args: format.
 * @length: length information.
 * Return: (0).
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
 * Return: (0).
 */
int *print_char(va_list *args, struct Length *length)
{
	int ch = va_arg(*args, int);

	_putchar(ch);
	length->value++;
	return (0);
}

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
 * null_fun - null function
 * Return: (0).
 */
int *null_fun()
{
	return (0);
}
/**
 * print_custom_string - print string with special handling for non-printable characters
 * @args: format.
 * @length: length information.
 * Return: (NULL).
 */
int *print_custom_string(va_list *args, struct Length *length)
{
    char *str = va_arg(*args, char *);

    while (*str != '\0')
    {
        if (*str >= 32 && *str < 127)
        {
            _putchar(*str);
            length->value++;
        }
        else
        {
            _putchar('\\');
            _putchar('x');
            _putchar((*str >> 4) < 10 ? (*str >> 4) + '0' : (*str >> 4) - 10 + 'A');
            _putchar((*str & 0xF) < 10 ? (*str & 0xF) + '0' : (*str & 0xF) - 10 + 'A');
            length->value += 4;
        }
        str++;
    }

    return (NULL);
}