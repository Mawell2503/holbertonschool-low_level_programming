#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of an argument passed into it
 * @argc: count of arguments
 * @argv: aray of string
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
