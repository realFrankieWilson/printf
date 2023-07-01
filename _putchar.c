#include "main.h"

/**
 * _putchar -> function to print char
 * @c: character to pass
 *
 * Return: a character.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
