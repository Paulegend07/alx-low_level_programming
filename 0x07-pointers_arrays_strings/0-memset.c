#include "main.h"
#include <stdio.h>

/**
 * *_memset - function that fills memory with constant bytes
 * @s: String value
 * @b: character value
 * @n: integer value
 *Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n < i; i++)
	{
	s[i] = b;
	}
	return (s);
}
