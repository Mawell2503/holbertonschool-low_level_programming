#include "main.h"
#include <stdio.h>

/**
 * strcpy - copies the string to the buffer
 * @dest: pointer to a character
 * @src: pointer to a character
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] =src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
