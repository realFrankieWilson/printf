#include "main.h"

/**
* non_printable -> prints an ascii codes of non pritable characters in hexa.
* @w: get the format width.
* @p: precision specification.
* @s: size specifier.
* @f: format specifier
* @array: array of prints to handle
* @args: arguments count
*
* Return: Printed characters.
*/

int non_printable(va_list args, char array[], int f, int w, int p, int s)
{

	UNUSED(array);
	UNUSED(f);
	UNUSED(w);
	UNUSED(p);

	char *sptr = va_arg(args, char *);
	int i = 0, index = 0;

	if (pstr == NULL)
		return (write(1, "(null)", 6));

	while (pstr[i] != '\0')
	{
		if (_printable(sptr[i]))
			array[i + index] = sptr[i];
		else
			index += hexadecimal_appnd(sptr[i], array, i + index);
		i++;
	}

	array[i + index] = '\0';

	return (write(1, array, i + index));
}
