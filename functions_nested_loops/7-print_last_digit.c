#include "main.h"

/**
* proto - bla bla
* @c: bla
*
* Return: 1 if c is a digit, 0 otherwise
*/

int print_last_digit(int n)
{
	if (n < 0)
	{
		n = n * -1;
		n = n % 10;
	}
	else
		 n = n % 10;
	return (n);
}
