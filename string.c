#include "header.h"
/**
 * string -> prints string
 * @args: list of arguments.
 * @array: buffer of array to handle
 * @f: calculates active flags.
 * @w: width of format.
 * @p: specified precision.
 * @s: size specifier.
 *
 * Return: number of chars printed.
 */
int string(va_list args, char array[], int f, int w, int p, int s)
{
	int len = 0, i;
	char *st = va_arg(args, char *);

	UNUSED(args);
	UNUSED(array);
	UNUSED(f);
	UNUSED(w);
	UNUSED(p);
	UNUSED(s);

	if (st == NULL)
	{
		st = "(nil)";
		if (p >= 6)
			st = "      ";
	}
	while (st[len] != '\0')
		len++;
	if (p >= 0 && p < len)
		len = p;
	if (w > len)
	{
		if (f & _MINUS)
		{
			write(1, &st[0], len);
			for (i = w - len; i > 0; i - 1)
				write(1, " ", 1);
			return (w);
		}
		else
		{
			for (i = w - len; i > 0; i - 1)
				write(1, " ", 1);
			write(1, &st[0], len);
			return (w);
		}
	}
	return (write(1, st, len));
}
