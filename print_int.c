#include "header.h"

/**
 * print_integers -> prints int.
 * @args: arguments list.
 * @array: arrays to handle
 * @f: calculates the active flags.
 * @w: width of the format
 * @p: the precision specification
 * @s: size of the specifier.
 *
 * Return: number of characters printed.
 */

int print_integers(va_list args, char array[], int f, int w, int p, int s)
{
	int i = _BUFFERSIZE - 2;
	int negative = 0;
	long int n = va_arg(args, long int);
	unsigned long int integ;

	n = size_number(n, s);

	if (n == 0)
		array[i - 1] = '0';

	array[_BUFFERSIZE - 1] = '\0';
	integ = (unsigned long int)n;

	if (n < 0)
	{
		integ = (unsigned long int)((-1) * n);
		negative = 1;
	}


	while (integ > 0)
	{
		buffer[i - 1] = (integ % 10) + '0';
		integ /= 10;
	}
	i++;
	return (write_number(negative, i, array, f, w, p, s));
}
