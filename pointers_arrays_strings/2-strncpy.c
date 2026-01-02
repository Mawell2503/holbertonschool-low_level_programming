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
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest = src;
		i++;
	}
	



}
