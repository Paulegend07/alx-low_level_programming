#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: the string to be printed between the strings
 * @n:the number of strings passed to the function
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

	va_list list;
	unsigned int i;
	char *word;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{

	word = va_arg(list, char *);

	if (word != NULL)
	{
	printf("%s", word);
	}
	else
	{
	printf("(nil)");
	}
	if (separator != NULL && i != n - 1)
	{
	printf("%s", separator);
	}
	}
	printf("\n");
	va_end(list);
}
