#include "main.h"

/**
* _islower - check for lower characters
* @c: pointer to an integer
*
* Return: 1 if c is a digit, 0 otherwise
*/

int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
