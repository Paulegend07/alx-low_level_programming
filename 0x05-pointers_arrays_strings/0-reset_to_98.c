#include "main.h"
#include<stdio.h>

/**
 * reset_to_98 - function that take pointer to an integer
 * @n: The pointer
 * Return: 0
 */
void reset_to_98(int *n)
{
	*n = 98;
	_putchar(*n);
}
