#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - a program that prints combinations of two two-digit numbers.
 *Return: 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 100; i++)
	{
	for (j = 0; j < 100; j++)
	{
	if (i < j)
	{
	int i1 = i / 10;
	int i2 = i  % 10;
	int j1 = j / 10;
	int j2 = j % 10;

	putchar(i1 + '0');
	putchar(i2 + '0');
	putchar(' ');
	putchar(j1 + '0');
	putchar(j2 + '0');
	if (i != 98 || j != 99)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
return (0);
}
