#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * *_strdup - function that return a pointer to a newly allocated space
 * @str: string value
 *Return: 0
*/

char *_strdup(char *str)
{
	int size;
	char *ptr;

	if (str == NULL)
	{
	return (NULL);
	}
	size = strlen(str);

	ptr = (char *) malloc(sizeof(char) * (size + 1));
	if (ptr == NULL)
	{
	return (NULL);
	}

	strcpy(ptr, str);

	return (ptr);
}
