#include "main.h"

/**
 * more_numbers - function that prints 10x the number
 *Return: 0
 */
void more_numbers(void)
{
	int x, y;

	for (x = 0; x <= 10; x++)
	{
	for (y = 0; y <= 14; y++)
	{
	if (y > 0)
	{
	_putchar((y / 10) + '0');
	}
	_putchar((y % 10) + '0');
	}
	_putchar('\n');
	}
}
