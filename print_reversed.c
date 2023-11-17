#include "main.c"
/**
 * print_reversed - print a string in reverse order
 * @length: length information.
 * @args: arguments to get a string (va_list)
 * Return: length of printed text (int)
 */
int *print_reversed(va_list *args, struct Length *length)
{
	int i, len;
	char *s = va_arg(*args, char *);

	if (s == NULL || strlen(s) == 0)
	{
		_putchar('r');
		length->value++;
		return (NULL);
	}
	for (i = 0, len = 0; s[i] != '\0'; i++)
	{
		length->value++;
		len++;
	}

	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);

	return (NULL);
}
