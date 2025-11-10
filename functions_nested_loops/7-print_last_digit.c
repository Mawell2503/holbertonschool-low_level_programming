#include "main.h"

/**
* print_last_digit - print the last digit of a number
* @n: pointer to an integer
*
* Return: 1 if c is a digit, 0 otherwise
*/

int print_last_digit(int n)
{
	int final;

	if (n < 0)
	{
		n = -n;
	}

	final = n % 10;
	_putchar('0' + final);
	return(final);
}
