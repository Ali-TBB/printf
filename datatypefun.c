#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * handle_string - handle string function
 * @args: format.
 * Return: handled string.
 */
char *handle_string(va_list *args)
{
	char *str = va_arg(*args, char *);

	return (strdup(str));
}
/**
 * handle_char - handle char function
 * @args: format.
 * Return: handled char.
 */
char *handle_char(va_list *args)
{
	int ch = va_arg(*args, int);
	char *result = (char *)malloc(2);

	if (result != NULL)
	{
		result[0] = ch;
		result[1] = '\0';
	}
	return (result);
}
/**
 * handle_integr - handle integr function
 * @args: format.
 * Return: handled integer.
 */
char *handle_integr(va_list *args)
{
	int n = va_arg(*args, int);
	char buffer[20];

	sprintf(buffer, "%d", n);
	return (strdup(buffer));
}
