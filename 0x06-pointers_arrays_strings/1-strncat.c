#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strncat - function that concerntrate two strings
 * @dest: First string
 * @src: Second string
 * @n: integer value
 *Return: 0
*/

char *_strncat(char *dest, char *src, int n)
{
	int src_len = strlen(src);
	int dest_len = strlen(dest);
	int i;

	for (i = 0; i < n && i < src_len; i++)
	{
	dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';

	return (dest);
}
