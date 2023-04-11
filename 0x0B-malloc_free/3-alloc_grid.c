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

	ptr = (int **)malloc(height * sizeof(int *));
	if (ptr == NULL)
	return (NULL);
	for (i = 0; i < height; i++)
	{
	ptr[i] = (int *)malloc(width * sizeof(int));
	if (ptr[i] == NULL)
	return (NULL);
	for (j = 0; j < width; j++)
	ptr[i][j] = 0;
	}
	return (ptr);
}
