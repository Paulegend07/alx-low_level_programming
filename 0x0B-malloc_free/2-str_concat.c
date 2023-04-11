#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * *str_concat - function that concerntrate two string
 *@s1: string one
 *@s2: string two
 *Return: 0
*/

char *str_concat(char *s1, char *s2)
{
	char *new_str;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	new_str = (char *) malloc(strlen(s1) + strlen(s2) + 1);

	if (new_str == NULL)
	return (NULL);

	strcpy(new_str, s1);
	strcat(new_str, s2);

	return (new_str);
}
