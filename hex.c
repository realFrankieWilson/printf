#include "main.h"

/**
 * _hex -> converts the number from base 10 to hexadecimal
 * @n: number to be converted
 * @hex: base of 16 beubg passed
 * @ch: char A - F / a - f
 *
 * Return: number of char printed.
 */

int _hex(unsigned int n, unsigned int hex, char ch)
{
	unsigned int i, j;
	char c;

	i = n % hex;
	j = n % hex;

	if (i > 10)
		c = (a - 10) + ch;
	else
		c = i + '0';

	if (j == 0)
		return (_putchar(c));
	if (j < hex)
	{
		if (j > 10)
			return (_putchar(j - 10 + ch) + _putchar(ch));
		return (_putchar(j + '0') + _putchar(c));
	}
	return (_hex(j, hex, ch) + _putchar(c));
}


/**
 * _hexa -> print lower case
 * @arg: argument recieved
 *
 * Return: number of char printed
 */

int _hexa(va_list arg)
{
	return (_hex(va_arg(arg, unsigned int), 16 'a'));
}

/**
 * _hexade -> prints upper case.
 * @arg: argument
 *
 * Return: number of char printed
 */

int _hexade(va_list arg)
{
	return (_hex(va_arg(arg, unsigned int), 16, 'A'));
}
