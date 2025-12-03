#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two string
 * @s1: pointer to the first string
 * @s2: pointer to second string
 *
 * Return:0
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, len1 = 0, len2 = 0;
	char *newstr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	newstr = malloc((len1 + len2 + 1) * sizeof(char));
	if (newstr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		newstr[i] = s1[i];

	for (j = 0; j < len2; j++)
		newstr[i + j] = s2[j];

	newstr[len1 + len2] = '\0';

	return (newstr);
}
