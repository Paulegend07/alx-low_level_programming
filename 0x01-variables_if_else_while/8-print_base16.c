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

	for (n = 0; n <= 15; n++)
	{
	putchar(n);
	putchar((14) + '0');
	}
	putchar('\n');
	return (0);
}
