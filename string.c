#include "main.h"

/**
 * _str -> prnts strings.
 * @arg: arguments list
 *
 * Return: returns strings.
 */

int _str(va_list arg)
{
	int len = 0;
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
		str = "(NULL)";

	while (str[len] != '\0')
		len += _putchar(str[len]);
	return (len);
}
