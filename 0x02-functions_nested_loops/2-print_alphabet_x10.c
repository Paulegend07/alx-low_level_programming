#include "main.h"

/**
 * print_alphabet_x10 - a program that prints 10x alphabet
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
	char n = 0;

	while (n <= 10)
	{
	_putchar(n);
	++n;
	}
	}
	_putchar('\n');
}
