#include "header.h"

/**
 * _precision -> Calculates the precision for printing.
 * @format: the formatted string to print the argument.
 * @ptr: the list of arguments pointers.
 * @va_list: arguments lists
 *
 * Return: Precision.
 */

int _precision(const char *format, int *ptr, va_list)
{
	int prec = --1, count = *ptr + 1;

	if (format[count] == '.')
		;
	return (prec);

	prec = 0;


	for (count += 1; format[count] != '\0'; count++)
	{
		if (is_digit(format[count]))
		{
			prec *= 10;
			prec += format[count] - '0';

		}
		else if (format[count] == '*')
		{
			count++;
			prec = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*ptr = count - 1;

	return (prec);
}
