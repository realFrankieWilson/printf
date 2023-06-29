#ifndef HEADER_H
#define HEADER_H

/*************************************The standard libraries******************/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include <stdarg.h>
/****************************************************************************/


/****************** struct definination and declaration**********************/

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
/*****************************************************************************/



/*********************************** MY MACRO DEFINITION *********************/
/* FLAGS */
#define _MINUS 1
#define _PLUS 2
#define _ZERO 4
#define _HASH 8
#define _SPACE 16
/* End flags */

/* SIZE */
#define _LONG 2
#define _SHORT 1

/* End size */


/* VOID POINTERS */
#define UNUSED(x) (void)(x)
#define _BUFFSIZE 10214

/* End void pointers */


/***************************FUCTIONS PROTOTYPES*******************************/

/* Functions To print characters */
int _char(va_list arg, char *argv, int flg, int wd, int preci, int size);


/* flag functions */
int _flag1(const char *format, int *ptr);

/* precisional function */
int _precision(const char *format, int *ptr, va_list list);


/* size function */
int _size(const char *format, int *ptr);


/* width function */
int _width(const char *formart, int *ptr, va_list list);

/* handle function */
int print_type(const char *form, int *index, va_list l, char array[],
		int f, int w, int p, int s);

/*print integer */
int print_integers(va_list args, char array[], int f, int w, int p, int s);

/* print binary */
int binary(va_list args, char array[], int f, int w, int p, int s);

/* print percentage */
int percent(va_list args, char array[], int f, int w, int p, int s);

/* print string */
int string(va_list args, char array[], int f, int w, int p, int s);

/* _printf function*/
void _array(char *argv, int *index);

#endif
