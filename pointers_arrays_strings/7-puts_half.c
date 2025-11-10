#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: pointer to a char
 *
 * Return:0
 */

void puts_half(char *str)
{
	int i = 0;
	int nlen;

	while (str[i] != '\0')
	{
		i++;
	}
	nlen = i;
	i = (nlen + 1)/ 2;

	while (i < nlen)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}


