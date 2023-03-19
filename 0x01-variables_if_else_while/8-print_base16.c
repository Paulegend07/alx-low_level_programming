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
	int m;

	for (m = 0; m <= 9; m++)
	{
	putchar(m);
	}
	for (n = 'a'; n <= 'f'; n++)
	{
	putchar(n);
	}
	putchar('\n');
	return (0);
}
