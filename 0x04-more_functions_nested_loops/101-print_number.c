#include "main.h"
#include<stdio.h>

/**
 * print_number - a function that print integer
 *@n: The character of the number
*/
void print_number(int n)
{
	unsigned int k = n;

	if (n < 0)
	{
	_putchar(45);
	k *= -1;
	}
	if (k / 10)
	{
	print_number(k / 10);
	}
	_putchar(k  % 10 + '0');
}
