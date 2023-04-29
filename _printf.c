#include "main.h"
/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char * const format, ...)
{
	conversion m[] = {
		{"%s", printf_string}, {"%c", printf_char}};

	va_list ar;
	int i = 0, re, size = 0;

	va_start(ar, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

There:
	while (format[i] != '\0')
	{
		re = 1;
		while (re >= 0)
		{
			if (m[re].kind[0] == format[re] && m[re].kind[1] == format[i + 1])
			{
				size += m[re].foo(ar);
				i = i + 2;
				goto There;
			}
			re--;
		}
		_putchar(format[i]);
		size++;
		i++;
	}
	va_end(ar);
	return (size);
}
