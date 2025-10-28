#include "main.h"

/**
* proto - int _islower(int c);
* @c: bla
*
* Return: 1 if c is a digit, 0 otherwise
*/

int _islower(int c)
{
	if(c >= 'a')
	{
		if(c <= 'z')
			return(1);
	}
	return(0);
}
