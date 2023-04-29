#include "main.h"

/**
 * _printf - THE PRINTF ITSELF.
 * @format: the format to be printed.
 * Return: number of chars.
 */
int _printf(const char * const format, ...)
{
	conversion m[] = {
		{"%s", printf_string}, {"%c", printf_char}};

	va_list args;
	int i = 0, j, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

there:
	while (format[i] != '\0')
	{
		j = 2;
		while (j >= 0)
		{
			if (m[j].kind[0] == format[i] && m[j].kind[1] == format[i + 1])
			{
				len += m[j].foo(args);
				i = i + 2;
				goto there;
			}
			j--;
		}
		_putchar(format[i]);
		len++;
		i++;
	}
	va_end(args);
	return (len);
}
