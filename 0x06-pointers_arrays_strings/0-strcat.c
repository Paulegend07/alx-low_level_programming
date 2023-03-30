#include "main.h"
#include<stdio.h>
#include <string.h>

/**
 * *_strcat - function that concerntrate two string
 * @dest: First string
 * @src: Second string
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	int length = strlen(dest);
	int i;

	for (i = 0; src[i] != '\0'; i++, length++)
	{
	dest[length] = src[i];
	}
	dest[length] = '\0';

	return (dest);
}

