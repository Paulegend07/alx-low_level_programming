#include <ctype.h>
#include "main.h"
#include<stdio.h>

/**
 * *string_toupper - function that change all lowercase letter of string
 * @str: String
 * Return: 0
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
	str[i] = toupper(str[i]);
	i++;
	}
	return (str);
}
