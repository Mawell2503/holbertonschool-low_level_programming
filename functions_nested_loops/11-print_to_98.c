#include "main.h"
#include <stdio.h>

/**
* print_to_98 - prints all natural number till 98
* @n:variable of an integer
*
* Return: 1 if c is a digit, 0 otherwise
*/

void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n != 98; n++)
		{
			if ( n < 10)
			{
				_putchar(n + '0');
				_putchar(',');
				_putchar(' ');
			}

			else if (n == 98)
			{
				_putchar(n + '0');
			}

			else
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
	}

	if (n > 98)
	{
		for (; n != 98; n--)
		{
			if (n >= 100)
			{
				_putchar((n / 100) + '0');
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}

			else if (n == 98)
			{
				_putchar(n + '0');
			}

			else
			{
				_putchar((n / 10) + '0');
			}
		}
	}
}
