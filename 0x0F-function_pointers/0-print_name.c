#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_name - function that print name
 * @name: character
 * @f: function pointer
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
	f(name);
	}
}
