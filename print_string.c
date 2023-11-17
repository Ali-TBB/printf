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
 * print_h_char - print short char function
 * @args: format.
 * @length: length information.
 * Return: (NULL).
 */
int *print_h_char(va_list *args, struct Length *length)
{
	int ch = va_arg(*args, int);

	_putchar(ch);
	length->value++;

	return (NULL);
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
 * print_custom_string - print string with special handling
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
