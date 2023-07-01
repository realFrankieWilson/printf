#include "main.h"

/**
 * _binary -> function to print binary
 * @bin: list being passed
 *
 * Return: updated count return.
 */

int _binary(va_list bin)
{
	int count = 0, i;
	int *arr;
	unsigned int x = va_arg(bin, unsigned int);
	unsigned int temp = x;

	while (x / 2 != 0)
	{
		x /= 2;
		count++;
	}

	arr = malloc(count * sizeof(int));
	if (arr == NULL)
	{
		free(arr);
		return (0);
	}


	for (i = 0; i < count; i++)
	{
		arr[i] = temp % 2;
		temp /= 2;
	}

	for (i = count - 1; i >= 0; i--)
		_putchar(arr[i] + '0');

	free(arr);
	return (count);
}
