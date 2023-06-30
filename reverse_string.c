#include "main.h"

/**
 * _reverse_string -> prints rot13 strings.
 * @args: argument lists.
 * @array: arrays to handle
 * @f: Calculates the active flags.
 * @w: get the format width.
 * @p: precision specification.
 * @s: size specifier.
 *
 * Return: Printed characters.
 */

int _reverse_string(va_list args, char array[], int f, int w, int p, int s)
{
	char *sptr;
	int i, count;

	count = 0;

	UNUSED(array);
	UNUSED(f);
	UNUSED(w);
	UNUSED(s);

	sptr = va_arg(args, char *);

	if (sptr == NULL)
	{
		UNUSED(p);
		sptr = ")Null(";
	}

	for (i = 0; sptr[i]; i++)
		;

	for (i = i--; i >= 0; i--)
	{
		char a = sptr[i];

		write(1, &a, 1);
		count++;
	}
	return (count);
}
