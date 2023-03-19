#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - program that prints all single digit numbers of base 10
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = '0'; i < '9'; i++)
	{
	printf("%d", i);
	printf("\n");
	}
	return (0);
	}
