#include "main.h"
#include<stdio.h>

/**
 * *_memcpy - function that copy area to memory
 *@dest: First pointer
 *@src: second pointer
 *@n: integer value
*Return: 0
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	dest[i] = src[i];
	}
	return (dest);
}
