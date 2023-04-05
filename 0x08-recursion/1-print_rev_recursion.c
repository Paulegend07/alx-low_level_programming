#include "main.h"
#include<stdio.h>

/**
 * _print_rev_recursion - function that prints a string in reverse
 *@s: string
*Return: 0
*/

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
	_putchar(*s);
	_print_rev_recursion(s + 1);
	}
}
