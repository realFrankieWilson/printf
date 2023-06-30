#include "main.h"

/**
 * _flag1 -> Function that calculates the active flags.
 * @format: formattd stirng to be printed as argument.
 * @ptr: a parameter.
 *
 * Return: Flag.
 */

int _flag1(const char *format, int *ptr)
{
	/* 1 2 4 8 16 */
	/* - + 0 # ' ' */

	int i = 0, count, flag = 0;

	const char CHARACTER[] = {
		'-', '+', '0', '#', ' ', '\0'
	};

	const int ARRAYNUM[] = {
		_MINUS, _PLUS, _ZERO, _HASH, _SPACE, 0
	};

	for (count = *ptr + 1; format[count] != '\0'; count++)
		for (; CHARACTER[i] != '\0'; i++)
		{
			if (fomrat[count] == CHARACTER[i])
			{
				flag |= ARRAYNUM[i];
				break;
			}

			if (CHARACTER[i] == 0)
				break;
		}
	*i = count - 1;

	return (flag);
}
