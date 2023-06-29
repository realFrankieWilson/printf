#ifndef HEADER_H
#define HEADER_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limit.h>
#include <stdarg.h>
int _write(char c);
int _printf(const char *format, ...);



/**
 * struct usr -> user's inpute option.
 * @usr: User's format.
 * @fptr: functin pointer.
 */

struct usr
{
	char usr;
	int (*fptr)(va_list, char[], int, int, int, int);
};

typedef struct usr  usr_t;

usr_t usr_choice[] = {
	{'c', _char},
	{'s', _string},
	{'%', _percent},
	{'i', _int},
	{'d', _int},
	{'b', _binary},
	{'u', _hexadec_upp},
	{'0', _octal},
	{'X', _non_printable},
	{'x', _hexadecimal},
	{'p', _pointer},
	{'S', _non_printable},
	{'r', _reverse},
	{'R', _rot13string},
	{'\0', NULL}
};

/************* Functions To print characters ************/
int _char(va_list arg, char *argv, int flg, int wd, int preci, int size);


/*********** flag functions ************/
int _flag1(const char *format, int *ptr);

/*********** precisional function ********/
int _precision(const char *format, int *ptr, va_list list);


/*********** size function *************/
int _size(const char *format, int *ptr);


/*********** width function ***********/
int _width(const char *formart, int *ptr, va_list list);

/************ handle function ***********/
int print_type(const char *form, int *index, va_list l, char array[],
		int f, int w, int p, int s);
#endif
