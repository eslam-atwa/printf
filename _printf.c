#include "main.h"
/**
 * _printf - THE PRINTF ITSELF
 * @format: the identifer.
 * Return: len of the string
 */
int _printf(const char * const format, ...)
{
	conversion m[] = {
		{"%s", printf_string}, {"%c", printf_char},
		{"%%", printf_37}, {"%b", printf_bin}};
	va_list args;
	int i = 0, re, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

there:
	while (format[i] != '\0')
	{
		re = 1;
		while (re >= 0)
		{
			if (m[re].kind[0] == format[re] && m[re].kind[1] == format[i + 1])
			{
				len += m[re].foo(args);
				i = i + 2;
				goto there;
			}
			re--;
		}
		_putchar(format[i]);
		len++;
		i++;
	}
	va_end(args);
	return (len);
}
