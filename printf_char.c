#include "main.h"
/**
 * printf_char - prints char.
 * @val: char.
 * Return: returns 0.
 */
int printf_char(va_list ar)
{
	char m;

	m = va_arg(ar, int);
	_putchar(m);
	return (0);
}
