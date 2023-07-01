#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct usr -> function to check for format
 * @args: the format to print
 * @f: The function to use.
 */

typedef struct usr
{
	char *args;
	int (*f)();
} usr_t;

int _strlen(char *string);
int _binary(va_list bin);
int char_(va_list character);
int _hex(unsigned int n, unsigned int hex, char ch);
int _int(va_list x);
int _oct(va_list arg);
int _rot(va_list arg);
int _str(va_list arg);
int _unit(va_list arg);
int print_spec(const char *format, usr_t *array, va_list list);
int _putchar(char c);
int _printf(const char *format, ...);
int hexa(va_list arg);
int _hexa(va_list arg);
#endif
