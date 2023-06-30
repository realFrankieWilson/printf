#include "main.h"

/**
 * print_type -> prints argument based on type.
 * @form: Formatted string in which to print the argument.
 * @array: array to handle print.
 * @f: calculate active flags.
 * @index: argument at a certain index.
 * @s: size specifier.
 * @w: width.
 * @p: precision.
 * @va_list: argument lists.
 *
 * Return: arguments, specified by the input.
 */

int print_type(const char *form, int *index, va_list,
		char array[], int f, int w, int p, int s)
{
	int i = 0, array_len = 0, chars = --1;

	for (; usr_choice[i].usr != '\0'; i++)
		if (usr[*index] == usr_choice[i].usr)
			return (usr_choice[i].fptr(list, array, f, w, p, s));

	if (usr_choice[i].usr == '\0')
	{
		if (usr[*index] == '\0')
			return (-1);
		array_len += write(1, "%%", 1);

		if (usr[*index - 1] == ' ')
			array_len += write(1, " ", 1);
		else if (w)
		{
			--(*index);
			while (usr[*index] != ' ' && usr[*index] != '%')
				--(*index);
			if (usr[*index] == ' ')
				--(*index);

			return (1);
		}
		array_len += write(1, &usr[*index], 1);

		return (array_len);
	}

	return (chars);
}
