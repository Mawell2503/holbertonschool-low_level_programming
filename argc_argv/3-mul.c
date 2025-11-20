#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - function that multiplies two numbers
 * argc: number of arguments passed to the program
 * argv: array of pointers to the argumenmts
 *
 * Return: 0
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
