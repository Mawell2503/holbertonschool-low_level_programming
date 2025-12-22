#include <stdio.h>

/**
 * _isupper - checks for uppercase character
 * @c: variable to an integer
 *
 * Return: 1 if correct, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
