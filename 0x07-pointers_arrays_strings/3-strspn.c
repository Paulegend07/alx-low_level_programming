#include "main.h"
#include<stdio.h>

/**
 * _strspn - function that get the lenght of a prefix
 * @s: string
 * @accept: substring
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
	for (j = 0; accept[j] != '\0'; j++)
	{
	if (s[i] == accept[j])
	count++;
	}
	}
	return (count);
}
