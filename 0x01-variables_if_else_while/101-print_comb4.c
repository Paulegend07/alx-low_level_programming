#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - different combinations of three digits.
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 1000; i++)
	{
	int i1 = i / 10;
	int i2 = i % 100;
	int i3 = i % 10;

	if (i1 < i2 && i2 < i3)
	{
	putchar(i1 + '0');
	putchar(i2 + '0');
	putchar(i3 + '0');
	if (i1 != 7 || i2 != 8 || i3 != 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
