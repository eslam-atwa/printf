#include "main.h"

/**
 * printf_bin - prints binary num.
 * @val: first argument
 * Return: 1.
 */
int printf_bin(va_list m)
{
	int flag = 0;
	int cont = 0;
	int i, a = 1, b;
	unsigned int num = va_arg(m, unsigned int);
	unsigned int s;

	for (i = 0; i < 32; i++)
	{
		s = ((a << (31 - i)) & num);
		if (s >> (31 - i))
			flag = 1;
		if (flag)
		{
			b = s >> (31 - i);
			_putchar(b + 48);
			cont++;
		}
	}
	if (cont == 0)
	{
		cont++;
		_putchar('0');
	}
	return (cont);
}
