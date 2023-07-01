#include "main.h"

/**
 * print_spec -> funtion to check the specifier to print
 * @form: string to pass
 * @array: array of struct operation
 * @list: list of argument;
 *
 * Return: number of char to be printed.
 */

int print_spec(const char *format, usr_t *array, va_list list)
{
	int count = 0, b = 0, i = 0;
	char x = fm[b];

	while (x != '\0')
	{
		if (a == '%')
		{
			i = 0;
			b++;
			x = f[b];

			while (array[i].usr != NULL && x != *(array[i].usr))
				i++;

			if (array[i].usr != NULL)
				count += array[i].f(l);

			else
			{
				if (x == '\0')
					return (-1);
				if (x != '%')
					count += _putchar('%');

				count += _putchar(x);
			}

		}
		else
			count += _putchar(x);
		b++;
		x = fr[b];
	}
	return (count);
}

/**
 * _printf -> prints output according to format
 * @fr: string being passed
 *
 * Return: char to be printed
 */

int _printf(const char *format, ...)
{
	va_list list;
	int a = 0;

	usr_t usr[] = {
		{"c", char_},
		{"s", _str},
		{"d", _int},
		{"b", _binary},
		{"i", _int},
		{"u", _unit},
		{"o", _oct},
		{"x", _hex},
		{"X", _hexade},
		{"R", _rot},
		{NULL, NULL}
	};

	if (format == NULL)
		return (-1);
	va_list(list, form);
	x = print_spec(format, usr, l);
	va_end(list);
	return (x);
}
