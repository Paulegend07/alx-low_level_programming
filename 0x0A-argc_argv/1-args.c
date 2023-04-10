#include "main.h"
#include<stdio.h>

/**
 * main - function that prints numbers of argument passed to it
 * @argc: argument count
 *@argv: argument vector
*Return: 0
*/

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
