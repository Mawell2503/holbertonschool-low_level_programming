#include <stdio.h>
#include "main.h"

/**
 * _strcat - concatenates two string
 * @dest: is a pointer to a char
 * @src: is a second pointer to a char
 *
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	int rd = 0;
	int rs = 0;

	while (dest[rd] != '\0')
	{
		rd++;
	}

	while (src[rs] != '\0')
	{
		dest[rd] = src[rs];
		rd++;
		rs++;
	}
	dest[rd] = '\0';
	return (dest);
}
