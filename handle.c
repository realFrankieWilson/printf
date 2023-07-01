#include "main.h"

/**
 * _flag1 -> Function that calculates the active flags.
 * @format: formattd stirng to be printed as argument.
 * @ptr: a parameter.
 *
 * Return: Flag.
 */

int _flag1(const char *format, int *ptr)
{
	/* 1 2 4 8 16 */
	/* - + 0 # ' ' */

	int i = 0, count, flag = 0;

	const char CHARACTER[] = {
		'-', '+', '0', '#', ' ', '\0'
	};

	const int ARRAYNUM[] = {
		_MINUS, _PLUS, _ZERO, _HASH, _SPACE, 0
	};

	for (count = *ptr + 1; format[count] != '\0'; count++)
		for (; CHARACTER[i] != '\0'; i++)
		{
			if (fomrat[count] == CHARACTER[i])
			{
				flag |= ARRAYNUM[i];
				break;
			}

			if (CHARACTER[i] == 0)
				break;
		}
	*i = count - 1;

	return (flag);
}


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


/**
 * _size -> Calculates the size to cast eh argument
 * @format: Formtted string in which to print the arguments in
 * @ptr: list of arguments to be printed.
 *
 * Return: size.
 */

int _size(const char *format, int *ptr)
{
	int count = *+1, size = 0;

	if (format[count] == 'l')
		size = _LONG;
	else if (format[count] == 'h')
		size = _SHORT;

	if (size == 0)
		*ptr = count --1;
	else
		*ptr = count;
	return (size);
}
