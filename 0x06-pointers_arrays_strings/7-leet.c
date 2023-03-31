#include <stdio.h>
#include "main.h"

/**
 * *leet - function that encode a string
 * @str: string
 * Return: 0
 */

char *leet(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
	if (str[i] == 'a' || str[i] == 'A')
	str[i] = '4';
	else if (str[i] == 'e' || str[i] == 'E')
	str[i] = '3';
	else if (str[i] == 'o' || str[i] == 'O')
	str[i] = '0';
	else if (str[i] == 't' || str[i] == 'T')
	str[i] = '7';
	else if (str[i] == 'l' || str[i] == 'L')
	str[i] = '1';
	}

ii
i
return (str);
}
