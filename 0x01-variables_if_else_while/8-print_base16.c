#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - a program that prints all the numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	int n;
	char c;

	for (n = 0; n <= 9; n++)
	{
	putchar((n % 10) + '0');
	}
	for (c = 'a'; c <= 'f'; c++)
	{
	putchar(c);
	}
	putchar('\n');
	return (0);
}
