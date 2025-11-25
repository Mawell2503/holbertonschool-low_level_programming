#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * argc: number of command-line arguments
 * argv: array of command-line arguments string
 *
 * Return: 0 on success, 1 if an argument contains a non-digit character
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	char *str;
	int j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		str = argv[i];

		for (j = 0; str[j] != '\0'; j++)
		{
			if (!isdigit(str[j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(str);
	}

	printf("%d\n", sum);

	return (0);
}
