#include "main.h"

/**
 * print_percent -> prints percentage sign
 * @args: list of arguments.
 * @array: buffer array to handle print.
 * @f: calculates active flags.
 * @w: format's width.
 * @s: size specifier.
 * @p: precision specification
 * Return: printed percentage signs.
 */
int print_percent(va_list args, char array[], int f, int w, int p, int s)
{
	UNUSED(args);
	UNUSED(array);
	UNUSED(f);
	UNUSED(w);
	UNUSED(p);
	UNUSED(s);
	return (write(1, "%%", 1));
}
