#include<stdio.h>

/**
 * main - Print lowercase and uppercase alphabet
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = "a"; c <= "z"; c++)
	putchar(c);
	for (c = "A"; c <= "Z"; c++)
	putchar('\n');
	return (0);
	}
