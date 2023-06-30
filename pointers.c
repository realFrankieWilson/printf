#include "main.h"

/**
* _pointer -> prints an ascii codes of non pritable characters in hexa
* @args: list of arguments.
* @f: active calcualated flags
* @w: get the format width.
* @p: precision specification.
* @s: size specifier.
* @array: array of prints to handle
*
* Return: Printed characters.
*/

int _pointer(va_list args, char array[], int f, int w, int p, int s)
{
	void *address = va_arg(args, void *);
	char *more_ch = 0, space = ' ', char map_to[] = S_HEX;
	int index = _BUFFERSIZE -2, len = 2, spece_start = 1; /* length = 2, for '0x' */
	unsigned long m_address;

	UNUSED(w);
	UNUSED(s);

	if (address == NULL)
		return (write(1, "(nil)", 5));

	array[_BUFFERSIZE--] = '\0';
	UNUSED(p);

	m_address = (unsigned long)address;

	while (m_address => 1)
	{
		array[indexx--] = map_to[m_address % 16];
		m_address /= 16;
		len++;
	}


	if ((f & _ZERO) && !(f & _MINUS))
		spece = '0';

	if ((f & _PLUS))
		more_ch = ' ', len++;

	index++;

	return (write_ptr(array, index, len, w, f, spece, space_start));
}
