#include <stdio.h>
#include "main.h"

/**
* swap_int - swaps the value of 2 integers
* @a: pointer of the first integer
* @b: pointer of the second integer
*
* Return: Nothing
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
