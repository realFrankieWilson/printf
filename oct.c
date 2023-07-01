#include "main.h"

/**
 * _oct -> prints octal num
 * @arg: list of argument to be passed
 *
 * Return: updated count
 */

int _oct(va_list arg)
{
	unsigned int n = va_arg(arg, unsigned int), temp = n;
	int count = 0, i, *arr;

	while (n / 8 != 0)
	{
		n /= 8;
		count++;
	}

	count++;

	arr = malloc(count * sizeof(int));

	for (i = 0; i < count; i++)
	{
		arr[i] = temp % 8;
		temp /= 8;
	}

	for (i = count - 1; i >= 0; i--)
		_putchar(arr[i] + '0');

	free(arr);
	return (count);
}
