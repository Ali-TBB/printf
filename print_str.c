#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
/**
 * print_str - Print function
 * @str: string.
 * Return: Printed chars.
 */

void print_str(const char *str)
{
	size_t len;

	len = strlen(str);

	write(1, str, len);

	free((char *)str);
}
