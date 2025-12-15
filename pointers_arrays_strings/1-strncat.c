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
	int dest_index = 0;
	int src_index = 0;

	if (dest[d] != '\0')
		d++;

	if (s < n)
		s++;

	dest[d] = src[s];
	d++;
	s++;

	dest[d] = '\0';
	return (dest);
}
