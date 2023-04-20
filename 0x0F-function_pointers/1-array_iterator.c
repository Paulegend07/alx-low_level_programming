#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - function that executes a functio
 * @array: pointer
 * @size: size of the array
 * @action: pointer to the function
 *Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	
	size_t  i;

	if (array != NULL && action != NULL)
	{
	for (i = 0; i < size; i++)
	{
	action(array[i]);
	}
	}
}
