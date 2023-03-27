#include "main.h"
#include<stdio.h>

/**
 * print_rev - function that prints a string in reverse
 * @s: The value of string
 * Return: 0
 */
void print_rev(char *s)
{
	int length, i;
	char *begin_ptr, *end_ptr, temp;

	 print_rev(s);

	begin_ptr = s;
	end_ptr = s;

	for (i = 0; i < (length - 1); i++)
	{
	end_ptr++;
	for (i = 0; i < length / 2; i++)
	{
	temp = *end_ptr;
	*end_ptr = *begin_ptr;
	*begin_ptr = temp;

	begin_ptr++;
	end_ptr--;
	}
	}
	for (i = 0; i < length; i++)
	{
	_putchar(s[i]);
	}
	_putchar('\n');
}

