#include "header.h"
int _printf(const char *format....);
/**
 * _array -> prints the content of the buffer.
 * @argv: The arrays of char.
 * @index: the character to be added next, by an index.
 */

void _array(char *argv, int *index)
{
	if (*index > 0)
		write(1, *(argv + 0), *index);
	*index = 0;
}

/**
 * _printf -> Runs the printf function.
 * @format: format to be printed.
 *
 * Return: printed char.
 */

int _printf(const char *format, ...)
{
	int x, printed = 0, printed_val = 0, int flg, wid, preci, size, index = 0;
	char buff[_BUFFERSIZE];
	va_list list;

	if (format == NULL)
		return (-1);

	va_start(list, format);

	for (x = 0; format && format[x] != '\0'; i++)
	{
		if (format[x] != '%')
		{
			buff[idex++] = format[x];
			if (index == _BUFFERSIZE)
				_array(buff, &index);
			printed_val++;
		}
		else
		{
			_array(buff, &index);
			flgs = _flag1(format, &x);
			wid = get_wd(format, &x, list);
			preci = _preci(format, &x, list);
			size = _size(format, &x);
			x++;

			printed = print_type(format, &x, list, buff, flgs, wid, preci, size);
			if (printed == -1)
				return (-1);
			printed_val += printed;
		}
	}
	_print_buffer(buff, &index);
	va_end(list);

	return (printed_val);
}
