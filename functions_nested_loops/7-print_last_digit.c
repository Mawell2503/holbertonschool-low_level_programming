#include "main.h"

/**
* proto - bla bla
* @c: bla
*
* Return: 1 if c is a digit, 0 otherwise
*/

int print_last_digit(int n)
{
	int final;

	if (n < 0)
		n = n * -1;

	final = n % 10;
	_putchar ('0' + final);
	return final;
}
