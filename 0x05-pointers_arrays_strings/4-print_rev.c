#include "main.h"
#include<stdio.h>

/**
 * print_rev - function that prints a string in reverse
 * @s: The value of string
 * Return: 0
 */
void print_rev(char *s)
{
	int longi = 0;
	int o;

	while (*s != '\0')
	{
	longi++;
	s++;
	}
	for (o = longi; o > 0; o--)
	{
	_putchar(s);
	s--;
	}
	_putchar('\n');
}
