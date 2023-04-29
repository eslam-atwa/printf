#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * struct format - the right converstion.
 * @id: the type.
 * @f: choses the right function.
 *
 */
typedef struct format
{
	char *kind;
	int (*foo)();
} conversion;

int _strlen(char *s);
int printf_char(va_list val);
int printf_string(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
