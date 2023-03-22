#include "main.h"

/**
 * print_alphabet_x10 - a program that prints 10x alphabet
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char i;
	int n;

	n = 0;

	while (n <= 9)
	{
	i = 'a';

	while (i <= 'z')
	{
	_putchar(i);
	i++;
	_putchar('\n');
	n++;
	}
	}
}
