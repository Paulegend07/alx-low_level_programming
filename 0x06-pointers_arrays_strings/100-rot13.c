#include "main.h"
#include <stdio.h>

/**
 * *rot13 - emcode a string
 * @str: string
 * Return: 0
 */
char *rot13(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
	if ((str[i] >= 'A' && str[i] <= 'M') || (str[i] >= 'a' && str[i] <= 'm'))
	str[i] = str[i] + 13;
	else if ((str[i] >= 'N' && str[i] <= 'Z') || (str[i] >= 'n' && str[i] <= 'z'))
	str[i] = str[i] - 13;
	i++;
}
return (str);
}
