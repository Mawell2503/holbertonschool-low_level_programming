#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * main - adds positive numbers
 * argc: argument count
 * argv: argument vector
 *
 * Return: 0
 */

void main(int argc, char *argv[])
{
	(void)argc;
	(void)argv;
	int x;
	int y;
	int sum;

	sum = x + y;

	if (isdigit(x) && isdigit(y))
	{
		printf("sum\n");
	}

	else if (!isdigit(x) && !isdigit(y))
	{
		printf("Error\n");
	}

	else
	{
		printf("0\n");
	}
	Return(0);
}

