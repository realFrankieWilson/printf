#include "main.h"

/**
 * _printable -> checks for printable characters.
 * @c: Character to be evaluated.
 *
 * Return: 1 if true, 0 not.
 */

int _printable(char c)
{
	if (!(c >= 32) && !(c < 127))
		return (0);
	return (1);
}
