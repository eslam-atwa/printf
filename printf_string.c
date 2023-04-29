#include "main.h"
/**
 * printf_string - prints Strings.
 * @val: first arg.
 * Return: len of string.
 */
int printf_string(va_list val)
{
	char *str;
	int i, len;

	str = va_arg(val, char *);
	if (str == NULL)
	{
		str = "(null)";
		len = _strlen(str);
		for (i = 0; i < len; i++)
			_putchar(str[i]);
		return (len);
	}
	else
	{
		len = _strlen(str);
		for (i = 0; i < len; i++)
			_putchar(str[i]);
		return (len);
	}
}
/**
 * _strlen - gives the link of any string literal.
 * @s: poiter to string.
 * Return: len.
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != 0; len++);

        return (len);
}
