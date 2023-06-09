#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - returns the index of the first elemen
 * @array: pointer that return int
 * @size: number of elements in the array array
 * @cmp: pointer to the function to be used to compare values
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	return (-1);
	if (array != NULL && cmp != NULL)
	for (i = 0; i < size; i++)
	{
	if (cmp(array[i]) != 0)
	return (i);
	}
	return (-1);
}
