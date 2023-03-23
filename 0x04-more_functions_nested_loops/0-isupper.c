#include "main.h"

/**
 * _isupper - function that check lowercase
 * @c: The character to be checked
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	return (1);
	else
	return (0);
}
