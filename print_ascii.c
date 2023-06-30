#include "main.h"
#define CON 268435456
/**
 * print_assci -> A function that prints an ascci value int lowercase.
 * Also in hexadecimal
 * @arg: the value to be printed.
 *
 * Return: An assci value.
 */

int print_assci(va_list arg)
{
	char ch;
	unsigned int, array[8], j = 1, con = CON, n, sum = 0;
	int checker;

	n = va_arg(arg, unsigned int);
	ch = 'a' - ':';
	array[0] = n / con;

	for (; < 8; j++)
	{
		sum += array[j];
		if (sum || j == 7)
			if (array[j] < 10)
				_write('0' + ch + array[j]);
			else
				_write('0' + ch + array[j]);
		checker++;
	}
	return (checker);
}
