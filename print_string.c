#include "main.h"

/**
 * print_string -> prints a stirng of character.
 * @args: list of arguments.
 * @array: buffer array to handle print.
 * @f: calculates active flags.
 * @w: format's width.
 * @s: size specifier.
 * @p: precision specification
 * Return: printed string.
 */

int print_string(va_list args, char *array, int f, int w, int p, int s)
{
	int len = 0, i;
	char *str = va_arg(args, char *);

	UNUSED(array);
	UNUSED(f);
	UNUSED(w);
	UNUSED(p);
	UNUSED(s);

	if (str == NULL)
	{
		str = "(null)";
		if (p >= 6)
			str = "      ";
	}


	while (str[len] != '\0')
		len++;
	if (p >= 0 && p < len)
		len = p;
	if (w > len)
	{
		if (f & F_MINUS)
		{
			write(1, &str[0], len);
			for (i = w - len; i > 0; i--)
				write(1, " ", 1);
			return (w);
		}
		else
		{
			for (i = w - len; i > 0; i--)
				write(1, " ", 1);
			write(1, &str[0], len);
			return (w);
		}
	}
	return (write(1, str, len));
}
