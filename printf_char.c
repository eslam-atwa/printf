#include "main.h"

/**
 * printf_char - prints charactares
 * @f: first argumente
 * Return: 1.
 */
int printf_char(va_list f)
{
	char m;

	m = va_arg(f, int);
	_putchar(m);
	return (1);
}
