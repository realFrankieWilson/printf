#include "main.h"

/**
 * print_percent -> prints integer
 * @args: list of arguments.
 * @array: buffer array to handle print.
 * @f: calculates active flags.
 * @w: format's width.
 * @s: size specifier.
 * @p: precision specification
 * Return: ints.
 */

int print_int(va_list args, char array[], int f, int w, int p, int s)
{
	int negative = 0, buff = BUFF_SIZE - 2;
	long int x = va_arg(args, long int);
	unsigned long int num;

	x = convert_size_number(x, s);

	if (x == 0)
		array[buff--] = '\0';

	array[BUFF_SIZE - 1] = '\0';
	num = (unsigned long int)x;

	if (x < 0)
	{
		num = (unsigned long int)((-1) * x);
		negative = 1;
	}

	while (num > 0)
	{
		array[buff--] = (num % 10) + '0';
		num /= 10;
	}

	buff++;

	return (write_number(negative, x, array, f, w, p, s));
}
