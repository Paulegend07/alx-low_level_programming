#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - combimation of two different digit
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
	int i1 = i / 10;
	int i2 = i % 10;

	if (i1 < i2)
	{
	putchar(i1 + '0');
	putchar(i2 + '0');
	if (i1 != 8 || i2 != 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
return (0);
}
