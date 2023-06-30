#ifndef MAIN_H
#define MAIN_H

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

/* MAP ASCCI VALUES IN HEXADECIMAL FORM */
#define HEX "0123456789ABCDEF"
#define S_HEX "0123456789abcdef"
#define CAP_ "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define LOW_ "abcdefghijklmnopqrstuvwxyz"
#define CAP_LOW_ROT "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"
#define ROT_REV "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"



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

/******The Checks Fucntions******/
/*printable functions */
int _printable(char c);


/******************* THE HEXADECIMAL FUNCTIONS *******************************/

/*hexadecimal assci code */
int hexadecimal_appnd(char assci_, char array[], int index);

/* digit verification */
int _digit(char c);

/* number size converter */
long int _convert(long int n, int s);

/* size converter */
long int size_convert(unsigned long int n, int s);


/* print unsigned int */
int _unsigned(va_list args, char array[], int f, int w, int p, int s);

/* print print unsigned number in octal form */
int _octal(va_list args, char array[], int f, int w, int p, int s);

/* print unsinged numbers in hexadecimal */
int _hexadecimal_(va_list args, char array[], int f, int w, int p, int s);

/* print unsigned numbers in upper hexadecimal */
int _upper_hexa(va_list args, char array[], int f, int w, int p, int s);

/* print hexadecimal num in lower / upper case */
int _hexa_lo_up(va_list args, char array[], char map[], char buff[], int f,
		char f_ch[], int w, int p, int s);


/**************************** PRINTS POINTERS, REVERS ETC ********************/

/* print rot13 strings. */
int _rot13(va_list args, char array[], int f, int w, int p, int s);

/* print reverse strings. */
int _reverse_string(va_list types, char array[], int f, int w, int p, int s);

/* print non-printable */
int non_printable(va_list args, char array[], int f, int w, int p, int s);

/* print pointer */
int _pointer(va_list args, char array[], int f, int w, int p, int s);


/******************** WRITE HANDLE FUNCTIN **********************************/

/* handle_sec_char */
int handle_sec_char(char c, char buffer[], int flags, int width, int precision,
		int size);

/* sec_number*/
int sec_number(int is_negative, int ind, char buffer[], int flags,
		int precision, int size);


/* sec_num */
int sec_num(int ind, char buffer[], int flags, int padd, char extra_c);

/* sec unused */
int sec_unused(int is_negative, int ind, char buffer[], int flags, int width,
		int precision, int size);

/* sec_pointer */
int sec_pointer(char buffer[], int ind, int length, int width, int flags,
		char padd, char extrac, int padd_start);


#endif
