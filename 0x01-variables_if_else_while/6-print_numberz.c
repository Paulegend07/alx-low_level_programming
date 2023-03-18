#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - program that prints all single digit numbers of base 10
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)

	putchar(num);

	putchar('\n');
	return (0);
}
