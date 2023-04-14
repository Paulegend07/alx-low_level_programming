#include "main.h"
#include <stdio.h>
#include<string.h>
#include <stdlib.h>

/**
 * *string_nconcat - function that concerntrate two string
 *@s1: string one
 *@s2: string two
 *@n: integer value
*Return: 0
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int len1, len2;;

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
	{
	n = len2;
	}
	p = malloc(len1 + n + 1);

	if (p == NULL)
	{
	return (NULL);
	}
	strncpy(p, s1, len1);

	strncat(p, s2, n);

	return (p);
}
