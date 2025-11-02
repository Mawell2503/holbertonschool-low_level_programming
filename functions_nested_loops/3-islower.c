#include "main.h"

/**
* int _islower(int c) - check for lower characters
* @c: bla
*
* Return: 1 if c is a digit, 0 otherwise
*/

int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	else
		return (0);
}
