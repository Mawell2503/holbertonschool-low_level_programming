#include <stdio.h>
#include"main.h"

/**
 * print_square - print a function that prints a square
 * @size: size of the square
 *
 * Return: 0
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (j = 0; j < size; j++)
	{
		for (i = 0; i < size; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
