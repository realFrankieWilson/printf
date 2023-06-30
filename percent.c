#include "main.h"
/**
 * percent -> prints the percent sign.
 * @args: arguments list.
 * @array: buffer array to handle
 * @f: Calculates active flags.
 * @w: calculates width.
 * @p: specifies a precision.
 * @s: size specifer.
 *
 * Return: number of characters printed.
 */

int percent(va_list args, char array[], int f, int w, int p, int s)
{
	UNUSED(args);
	UNUSED(array);
	UNUSED(f);
	UNUSED(w);
	UNUSED(p);
	UNUSED(s);


	return (write(1, "%%", 1));
}
