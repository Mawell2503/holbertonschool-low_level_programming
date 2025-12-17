#include <stdio.h>
#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: pointer to string
 * @src: pointer to a string
 * @n: variable to an integer
 *
 * Return: 1
 */

char *_strncpy(char *dest, char *src, int n)
{
	n = 0;

	while (src[n] != '\0')
	{
		dest[n] = src[n];
		n++;
	}
	return dest;
}
