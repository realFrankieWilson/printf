#include "main.h"

/**
 * print_binary -> prints an unsigned number.
 * @args: list of arguments.
 * @array: arrays.
 * @f:....
 * @w:....
 * @p:....
 * @s:....
 *
 * Return: binary numbers.
 */

int print_binary(va_list args, char array[], int f, int w, int p, int s)
{
	unsigned int n, m, i, sum;
	unsigned int array_[32];
	int count;

	UNUSED(array);
	UNUSED(f);
	UNUSED(w);
	UNUSED(p);
	UNUSED(s);

	n = va_arg(args, unsigned int);
	m = 2147483648;
	array_[0] = n / m;

	for (i = 1; i < 32; i++)
	{
		m /= 2;
		array_[i] = (n / m) % 2;
	}

	for (i = 0, sum = 0, count = 0; i < 32; i++)
	{
		sum += array_[i];
		if (sum || i <= 32)
		{
			char z = '0' + array_[i];

			write(1, &z, 1);
			count++;
		}
	}
	return (count);
}
