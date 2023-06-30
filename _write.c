#include "main.h"

/**
 * _write -> writes the character c to stdout
 * @c: The character to print.
 *
 * Return: On success 1.
 * On error, -1, and errno is set appropraitely.
 */

int _write(char c)
{
	return (write(1, &c, 1));
}
