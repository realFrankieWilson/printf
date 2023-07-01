#include "main.h"

/**
 * _unit -> prints unsigned int
 * @arg: argument's list
 *
 * Return: char count.
 */

int _unit(va_list arg)
{
	unsigned int n;
	int tmp = 1, len = 0;

	n = va_arg(arg, unsigned int);

	while (n / tmp > 9)
		tmp *= 10;
	while (tmp != 0)
	{
		len += _putchar(n / tmp + '0');
		n %= tmp;
		tmp /= 10;
	}
	return (len);
}
