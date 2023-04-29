#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
/**
 * struct format - choses the right specifer to operate
 * @id: a pointer will help
 * @f: the pointer.
 *
 */
typedef struct form
{
	char *kind;
	int (*foo)();
} conversion;
int _printf(const char *format, ...);
int printf_bin(va_list val);
int *_strcpy(char *dest, char *src);
int _strlenc(const char *s);
int _strlen(char *s);
int _strlenc(const char *s);
int printf_37(void);
int printf_char(va_list val);
int printf_string(va_list val);
int _putchar(char c);
#endif
