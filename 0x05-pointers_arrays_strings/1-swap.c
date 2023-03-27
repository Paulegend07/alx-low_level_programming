#include "main.h"
#include<stdio.h>

/**
 * swap_int - function that swap the value of two integer
 *@a: The first integer
*@b: The second integer
*Return: 0
*/
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
