#include "main.h"

/**
 * char_p -> prints a character
 * @args: list of arguments
 * @array: list of arguments arrays
 * @f: list of active flags.
 * @w: list of width
 * @p: Precision specification
 * @s: Size specification
 *
 * Return: number of characters.
 */

int char_p(va_list args, char array[], int f, int w, int p, int s)
{
	char ch = va_arg(args, int);

	return (handle_sec_char(ch, array, f, w, p, s));
}
