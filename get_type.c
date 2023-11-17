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
	{"S", print_custom_string},
	{NULL, NULL}
};
typ l_typs[] = {
	{"d", print_l_integr},
	{"u", print_l_unsigned_int},
	{"i", print_l_integr},
	{"o", print_l_unsigned_octal},
	{"x", print_unsigned_l_hexadecimal},
	{"X", print_unsigned_l_HEXADECIMAl},
	{NULL, NULL}
};
typ h_typs[] = {
	{"c", print_h_char},
	{"d", print_h_integr},
	{"u", print_h_unsigned_int},
	{"i", print_h_integr},
	{"o", print_h_unsigned_octal},
	{"x", print_h_unsigned_hexadecimal},
	{"X", print_h_unsigned_HEXADECIMAl},
	{NULL, NULL}
};
	if (type == TYPE_LONG)

		typs = l_typs;
	else if (type == TYPE_SHORT)
		typs = h_typs;
	else
		typs = n_typs;

	while (typs[i].tp != NULL)
	{
		if (typs[i].tp[0] == fc)
		{
			return (typs[i].type_field);
		}
		else if (fc == 'r')
		{
			return (print_reversed);
		}
		else if (fc == 'R')
		{
			return (print_rot13);
		}

	i++;
	}
	if (typs[i].tp == NULL)
	{
		_putchar('%');
		_putchar(fc);
	}
	return (null_fun);
}
