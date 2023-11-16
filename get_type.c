#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * get_type - get the printer function
 * @fc: format code
 * @type: printers type
 * Return: printer function
*/
int *(*get_type(char fc, int type))(va_list * args, struct Length *length)
{
	typ *typs;
	int i = 0;

typ n_typs[] = {
	{"c", print_char},
	{"s", print_string},
	{"d", print_integr},
	{"u", print_unsigned_int},
	{"i", print_integr},
	{"o", print_unsigned_octal},
	{"x", print_unsigned_hexadecimal},
	{"X", print_unsigned_HEXADECIMAl},
	{"p", print_address},
	{"b", print_unsigned_binary},
	{NULL, NULL}
};

	if (type == TYPE_LONG)

		typs = n_typs;
	else if (type == TYPE_SHORT)
		typs = n_typs;
	else
		typs = n_typs;

	while (typs[i].tp != NULL)
	{
		if (typs[i].tp[0] == fc)
		{
			return (typs[i].type_field);
		}
	i++;
	}
	if (typs[i].tp == NULL)
		_putchar(fc);

	return (null_fun);
}
