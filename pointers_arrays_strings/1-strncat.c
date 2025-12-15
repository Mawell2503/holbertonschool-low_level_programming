#include <stdio.h>
#include "main.h"

/**
 * _strncpy - merges 2 strings together
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
	int nd;

	if (dest[d] != '\0')
		d++;

	
	if (src[s] != '\0')
		dest[d] = src[s];
		d++;
		s++;

	dest[d]  '\0';
	return (dest);
}
