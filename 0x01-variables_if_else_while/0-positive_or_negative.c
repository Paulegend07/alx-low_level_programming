#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - A program with if...else if...else... statement
 * Return : Always 0(Sucess)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
	printf("value of n  is poitive\n");
	}
	else if (n == 0)
	{
	printf("value of n  is zero\n");
	}
	else
	{
	printf("value of n is negative\n");
	}
	printf("value of n : %d\n", n);
	return (0);
	}
