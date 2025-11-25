#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - string duplicated
 * @str: pointer to a char
 *
 * Returns: NULL if str = NULL
 */

char *_strdup(char *str);
{
	char *dup;
	unsigned int i, len = 0;

	if(str == NULL)
		return NULL;

	while (str[len] != '\0')
		len++;

	dup = malloc((len + 1) * sizeof(char));
	if (dup == NULL)
		return NULL;
	for (i = 0; i < len; i++)
		dup[i] = str[i];

	dup[len] = '\0';

	return dup;
}
