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
	if (i == 0 || s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n' || s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' || s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' || s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' || s[i - 1] == '}')
	{
	s[i] = toupper(s[i]);
	}
	}
	return (s);
}
