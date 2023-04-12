#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 ***alloc_grid - Write a function that return a pointer
 *@width: width value
*@height: height value
*Return: 0
*/

int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if (width < 1 || height < 1)
	return (NULL);
	ptr = malloc(height * sizeof(int *));
	if (ptr == NULL)
	return (NULL);

	for (i = 0; i < height; i++)
	{
	ptr[i] = malloc(width * sizeof(int));
	if (ptr[i] == NULL)
	{
	for (j = 0; j < i; j++)
	{
	free(ptr[i]);
	}
	free(ptr);
	return (NULL);
	}
	}
	for (i = 0; i < height; i++)
	{
	for (j = 0; j < width; j++)
	ptr[i][j] = 0;
	}
	return (ptr);
}
