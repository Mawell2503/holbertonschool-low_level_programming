#include "main.h"
#include <stdio.h>
 
/**
* print_to_98 - prints all natural number till 98
* @n:variable of an integer
*
* Return: 1 if c is a digit, 0 otherwise
*/

void printw(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
		printw(n / 10);

	_putchar((n % 10 ) + '0');
}

void print_to_98(int n)
{ 
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printw(n);

			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}

	else
	{
		for (; n >= 98; n--)
		{
			printw(n);

			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
