#include <stdio.h>
#include "main.h"

/*
 * _puts - prints 
 * @str: pointer to a char
 *
 * Return:0
 */

void _puts(char *str)
{
	while(*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');

}
