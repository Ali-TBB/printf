#include "main.h"
#include <stdio.h>

/**
 * get_type - get the printer function
 * @fc: format code
 * @type: printers type
 * Return: printer function
*/
int *(*get_type(char fc, int type))(va_list * args, struct Length *length)
{
	typ *typs;
	int i;

typ n_typs[] = {
	{"c", print_char},
	{"s", print_string},
	{"d", print_integr},
	{"u", print_unsigned_int},
	{"i", print_integr},
	{"_", NULL}
};

	if (type == TYPE_LONG)

		typs = n_typs;
	else if (type == TYPE_SHORT)
		typs = n_typs;
	else
		typs = n_typs;

	for (i = 0; typs[i].type_field != NULL; i++)
	{
		if (typs[i].tp[0] == fc)
		{
			return (typs[i].type_field);
		}
	}
	return (NULL);
}
