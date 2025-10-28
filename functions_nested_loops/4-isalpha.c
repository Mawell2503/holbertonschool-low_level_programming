#include "main.h"

/**
* int _isalpha - bla bla
* @c: bla
*
* Return: 1 if c is a digit, 0 otherwise
*/

int _isalpha(int c)
{
	if(c >= 'a' && c <= 'z')
	{
		if(c >= 'A' && c <= 'Z')
			return(1);
	}
	return(0);
}
