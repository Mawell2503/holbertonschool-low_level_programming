#include "main.h"

/**
* print_sign - print sign of a number
* @c: bla
*
* Return: 1 if c is a digit, 0 otherwise
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
} 
