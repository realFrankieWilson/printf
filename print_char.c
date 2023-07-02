#include "main.h"

/**
 * print_char -> prints a Char.
 * @args: list of arguments.
 * @array: buffer array to handle print.
 * @f: calculates active flags.
 * @w: format's width.
 * @s: size specifier.
 * @p: precision specification
 * Return: printed characters.
 */

int print_char(va_list args, char *array, int f, int w, int p, int s)
{
	char ch = va_arg(args, int);

	return (handle_write_char(ch, array, f, w, p, s));
}
