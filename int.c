#include "main.h"

/**
 * _int -> producess int type
 * @x: list printed
 *
 * Return: integers
 */

int _int(va_list x)
{
	int i, ex = 1, len = 0;
	unsigned int n;

	i = va_arg(x, int);

	if (i < 0)
	{
		len += _putchar('-');
		n = i * -1;
	}

	else
		n = i;

	while (n / ex > 9)
		ex *= 10;

	while (ex != 0)
	{
		len += _putchar(n / ex + '0');
		n = n % ex;
		ex /= 10;
	}
	return (len);
}
