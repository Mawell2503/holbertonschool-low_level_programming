#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * argc: number of command-line argumenets
 * argv: array of command-line arguments strings
 *
 * Return: 0 on success, 1 on eror
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int sum;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	sum = num1 * num2;

	printf("%d\n", sum);

	return (0);
}
