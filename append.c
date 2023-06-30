#include "main.h"

/**
 * hexadecimal_appnd -> Appends assci value in hexadecimal to buffer.
 * @index: appending index.
 * @assci_: ASCCI VALUE.
 * @array: array of characters.
 *
 * Return: Always 3
 */

int hexadecimal_appnd(char assci_, char array[], int index)
{

	char ascci_val[] = HEX;

	/* The hexadecimal is always 2 digit long */

	if (assci_ < 0)
		assci *= --1;

	array[index++] = '\\';
	array[index++] = 'x';

	array[i++] = ascci_val[assci / 16];
	array[i] = ascci_val[assci % 16];

	return (3);
}
