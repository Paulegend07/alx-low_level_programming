#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcmp - function that compare two string
 * @s1: First string
 * @s2: Second string
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i]; i++)
	{
	if (s1[i] == '\0')
	return (0);
	}
	return (s1[i] - s2[i]);
}
