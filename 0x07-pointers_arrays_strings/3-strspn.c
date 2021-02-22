#include "holberton.h"

/**
 *_strspn - a function that gets the length of a prefix substring
 *@s: string to be scanned
 *@accept: string containing the characters to match
 *Return: the number of bytes in the initial segment of s which consist only of
 *bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, len;

	while (*s)
	{
		for (i = 0; accept[i] != 0; i++)
		{
			if (accept[i] == *s)
				break;
		}
		if (accept[i] != '\0')
			len++;
		else
			break;
		s++;
	}
	return (len);
}
