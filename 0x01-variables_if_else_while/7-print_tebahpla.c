#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - a program that prints the lowercase alphabet in reverse
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
	putchar(c);
	}
	putchar('\n');
	return (0);
}
