#include "main.h"

/**
 * print_line - function that draw a straight line in terminal
 * @n: The number of times
 * Return: 0
 */
void print_line(int n)
{
	int x;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (x = 0; x < n; x++)
	{
	_putchar(95);
	}
	_putchar('\n');
	}
}

