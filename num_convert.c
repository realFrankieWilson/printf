#include "main.h"

/**
 * _convert -> converts a specified size of a number.
 * @n: number
 * @s: number to be casted, indicated by type.
 *
 * Return: casted value of a number.
 */

long int _convert(long n, int s)
{
	if (s == _SHORT)
		return ((short)n);
	else if (s == _LONG)
		return (n);

	return ((int)n);
}
