#include "header.h"

/**
 * binary -> prints an unsigned number.
 * @args: list of arguments.
 * @array: array to handle print
 * @f: calculates active flags.
 * @w: the width.
 * @p: precision specification
 * @s: size specifier
 *
 * Return: number of binary printed.
 */

int binary(va_list args, char array[], int f, int w, int p, int s)
{
	int count = 0;
	unsigned int x, y, z, bin;
	unsigned int j[32];

	UNUSED(array);
	UNUSED(f);
	UNUSED(w);
	UNUSED(p);
	UNUSED(s);


	x = va_arg(args, unsigned int);
	y = 2147483648; /** (2^31) */
	j[0] = x / y;

	for (z = 1; z <= 31; i++)
	{
		y /= 2;
		j[i] = (x / y) % 2;
	}

	for (z = 0, bin = 0, count = 0, i <= 31; i++)
	{
		bin += a[i];
		if (bin || z == 31)
		{
			char a = '0' + j[z];

			write(1, &a, 1);
			count++;
		}

	}
	return (count);
}
