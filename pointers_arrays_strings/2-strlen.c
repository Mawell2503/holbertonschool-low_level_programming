#include <stdio.h>
#include "main.h"

/**
 * _strlen - measures a string
 * @s: pointer to a char
 *
 * Return: length
 */

int _strlen(char *s)
{
	int length = 0;

	for ( ; *s != '\0'; s++)
		length++;

	return (length);
}
