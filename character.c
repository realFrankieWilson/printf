#include "main.h"

/**
 * char_ -> function to write character
 * @character: list of a given char
 *
 * Return: number of printed characters.
 */

int char_(va_list character)
{
	return (_putchar(va_arg(character, int)));
}
