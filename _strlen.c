#include "main.h"
/**
 * _strlen - strlen function
 * @str: string.
 * Return: length of str.
 */
int _strlen(const char *str)
{
	int len = 0;

	if (str == NULL)
	{
		return (-1);
	}
	while (str[len])
	{
		len++;
	}
	return (len);
}
