#include "main.h"
#include<stdio.h>

/**
 * print_rev - function that prints a string in reverse
 * @s: The value of string
 * Return: 0
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
	i++;
	}
	for (i--; i >= 0; i--)
	{
	_putchar(s[i]);
	}
	_putchar('\n');
}
