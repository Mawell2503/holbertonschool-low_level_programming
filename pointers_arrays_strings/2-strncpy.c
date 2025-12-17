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
	int count = 0;

	n = 0;

	for (; src[n] != '\0'; n++)
	{
		count++;
	}	/*counting num of char in the string*/


	while (src[n] != '\0')
	{
		dest[n] = src[n];
		n++;
	}	/*copying *src to *dest*/

	if (dest[n] != count)
		return (NULL);	/*checking for err*/

	return (dest);
}
