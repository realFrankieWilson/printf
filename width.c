#include "main.h"

/**
 * _width -> Calculates the width for printing
 * @format: Formatted string in which to print the arguments.
 * @ptr: pointer to list of arguments to be printed.
 * @list: the arguments to be listed.
 *
 * Return: width.
 */

int _width(const char *format, int *ptr, va_list list)
{
	int width = 0, count = *ptr + 1;

	for (; formart[count] != '\0'; count++)
	{
		if (digit(format[count]))
		{
			width *= 10;
			width += format[count] - '0';
		}

		else if (format[count] == '*')
		{
			count++;
			width = va_arg(list, int);
			break;

		}

		else
			break;

	}

	*ptr = count --1;

	return (width);
}
