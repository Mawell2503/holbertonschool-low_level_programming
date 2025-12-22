#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints 10 times the number from 0 to 14
 *
 * Return: void
 */

void more_numbers(void)
{
	int n;
	int rows;

	for (rows = 0; rows != 10; rows++)
	{

		for (n = 0; n <= 14; n++)
		{
			if (n <= 9)
				_putchar(n + '0');
			if (n > 9)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
		}

		_putchar('\n');
	}
}
