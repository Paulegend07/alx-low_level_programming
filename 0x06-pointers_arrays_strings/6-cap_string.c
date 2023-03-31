#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * *cap_string- function that capitalize string
 * @s: String
 * Return: 0
 */

char *cap_string(char *s)
{
	int i;
	char ch;

	for (i = 0; s[i] != '\0'; i++)
	{
	if (i == 0)
	{
	ch = toupper(s[i]);
	s[i] = ch;
	}
	else if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?' || s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
	{
	ch = toupper(s[i + 1]);
	s[i + 1] = ch;
	}
	}
return (s);
}
