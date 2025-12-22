#include <stdio.h>
#include "main.h"

/**
 * print_numbers - function that prints number 0 to 9
 *
 * Return:
 */

void print_numbers(void)
{
	int c = '0';

	for (; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
