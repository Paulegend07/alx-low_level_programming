#include "main.h"
#include<stdio.h>

/**
 * *_strchr - function that locate a character in a string
 * @s: string
 * @c: character
 *Return: 0
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
	if (*(s + i) == c)
	{
	return (s + i);
	}
	i++;
	}
	return (NULL);
}
