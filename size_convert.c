#include "main.h"

/**
 * size_convert -> convert a number to the specified size.
 * @n: the number to be converted
 * @s: the size indicator, type to be casted.
 *
 * Return: casted value of a number.
 */

long int size_convert(unsigned long int n, int s)
{
	if (s == _SHORT)
		return ((unsigned short)n);
	else if (s == _LONG)
		return (n);

	return ((unsigned int)n);
}
