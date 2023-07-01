#include "main.h"

/**
 * _strlen -> get the length of the string
 * @string: string
 *
 * Return: length
 */

int _strlen(char *string)
{
	int len;

	len = 0;
	while (string[len] != '\0')
	{
		len++;
	}
	return (len);
}
