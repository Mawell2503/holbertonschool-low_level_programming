#include "main.h"
#include <stdio.h>

/**
* proto - bla bla
* @c: bla
*
* Return: 1 if c is a digit, 0 otherwise
*/

void print_to_98(int n)
{
	for(;n <= 98;n++)
	{
		if (n < 10)
		{
			_putchar(n + '0');
		}
		else
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		if (n != 98)
		{
			_putchar(',');
                        _putchar(' ');
		}
	}
	_putchar('\n');
}
