#include "main.h"
#include <stdio.h>

/**
* times_table - bla bla
* @c: bla
*
* Return: 1 if c is a digit, 0 otherwise
*/

void times_table(void)
{
        int factX;
        int factY;
        int prod;

	for (factX = 0;factX <= 9;factX++)
	{
		for (factY = 0;factY <= 9;factY++)
		{
			prod = factX * factY;

			if (factY == 0)
			{
				_putchar(prod + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');

				if (prod < 10)
				{
					_putchar(' ');
					_putchar(prod + '0');
				}
				else
				{
					_putchar((prod / 10) + '0');
					_putchar((prod % 10) + '0');
				}
			}
		}
		_putchar('\n');
	}
}
