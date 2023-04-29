#include "main.h"
/**
 * _strlen - gives the link of any string literal.
 * @s: poiter to string.
 * Return: len.
 */

int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);

}
