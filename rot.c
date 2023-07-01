#include "main.h"

/**
 * _rot -> prints rot13 version
 * @arg: list of argument
 *
 * Return: rot chars.
 */

int _rot(va_list arg)
{
	int a, cunt = 0;
	char *ch;

	a = count;
	ch = va_arg(arg, char *);

	if (ch == NULL)
		return (-1);

	while (ch[a] != '\0')
	{
		if ((ch[a] >= 'a' && ch[a] <= 'z') || (ch[a] >= 'A' &&
					ch[a] <= 'Z'))
		{
			if ((ch[a] >= 'n' && ch[a] <= 'z') (ch[a] >= 'N' &&
						ch[a] <= 'Z'))
				count += _putchar(ch[a] - 13);
			else
				count += _putchar(ch[a] + 13);
		}
		else
			count += _putchar(ch[a]);
		a++;
	}
	return (count);
}
