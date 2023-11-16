#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _puts - Print function
 * @str: string.
 * Return: Printed string.
 */

int _puts(char *str)
{
	size_t len;

	len = _strlen(str);

	write(1, str, len);

	return (len);
}
/**
 * _strlen - length function
 * @str: string.
 * Return: length of string.
 */
int _strlen(const char *str)
{
	size_t len = 0;

	while (str[len])
	{
		len++;
	}
	return (len);
}
