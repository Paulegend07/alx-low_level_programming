#include "main.h"
#include<stdio.h>

/**
 * _pow_recursion - function that return the value of x to y
 * @x: first number
 *@y: second number
*Return: 0
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
	return (-1);
	}
	else if (y == 0)
	{
	return (1);
	}
	else
	{
	return (x * _pow_recursion(x, y - 1));
	}
}
