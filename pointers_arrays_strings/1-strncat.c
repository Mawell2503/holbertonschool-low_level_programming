#include <stdio.h>
#include "main.h"

/**
 * _strncat - merges 2 strings together
 * @dest: pointer of the first string
 * @src:pointer of the second string
 * @n:a vriable to an integer
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int d = 0;
	int s = 0;

	if (dest[d] != '\0')
		d++;

	if (src[s] < n)
		s++;

	dest[d] = src[s];
	d++;
	s++;

	dest[d] = '\0';
	return (dest);
}
