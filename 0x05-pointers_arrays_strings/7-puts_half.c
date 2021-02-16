#include "holberton.h"

/**
 *_strlen - a function that returns the length of a string
 *@s: pointer
 *Return: 0
 */

int _strlen(char *s)
{
	int len_str;

	for (len_str = 0; s[len_str] != '\0'; len_str = len_str + 1)
		;
	return (len_str);
}

/**
 *puts_half - a function that prints half a string
 *@str: pointer
 *
 */

void puts_half(char *str)
{

	int n;

	n = _strlen(str);
	if (_strlen(str) % 2 != 0)
		n = (_strlen(str) / 2) - 1;

	for (n = _strlen(str) / 2; str[n] != '\0'; n = n + 1)

		_putchar(str[n]);
		_putchar('\n');
}