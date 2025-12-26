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
	int src_index = 0;
	int dest_index = 0;

	if (dest == NULL || src == NULL)
		return (NULL);
	if (n <= 0)
		return (dest);

	for (; dest[dest_index] != '\0'; dest_index++)
		;

	while (src_index < n && src[src_index] != '\0')
	{
		dest[dest_index] = src[src_index];
		dest_index++;
		src_index++;
	}

	dest[dest_index] = '\0';

	return (dest);
}
