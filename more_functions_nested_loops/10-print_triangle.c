#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 *
 * Return: 0
 */

void print_triangle(int size)
{
	int n, m;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (n = 0; n <= size; n++)
	{
		for (m = 0; m < size - n; m++)
		{
			_putchar(' ');
		}

		for (m = 0; m < n; m++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}
