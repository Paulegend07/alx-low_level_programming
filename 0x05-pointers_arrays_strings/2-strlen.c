
#include "main.h"
#include<stdio.h>

/**
 * _strlen - function that return the lenght of a string
 * @s: The value of lenght
 * Return: 0
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
	length++;
	}
	return (length);
}
