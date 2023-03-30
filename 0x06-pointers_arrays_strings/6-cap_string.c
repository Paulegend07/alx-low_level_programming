#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * *cap_string- function that capitalize string
 * @s: String
 * Return: 0
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	if (i == 0)
	s[i] = toupper(s[i]);
	if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?' || s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
s[i + 1] = toupper(s[i + 1]);
	}
	return (s);
}
