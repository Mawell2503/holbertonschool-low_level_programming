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

	if (dest == NULL || src == NULL || n < 0)
		return NULL;

	for (; dest[dest_index] != '\0'; dest_index++)
		;

	for (; src[src_index] != '\0'; src_index++)
		;

	if (n > src_index - 1)
		return (-1);

	src_index = 0;

	while (src_index < n)
	{
		dest[dest_index] = src[src_index];
		dest_index++;
		src_index++;
	}

	return dest;
}
