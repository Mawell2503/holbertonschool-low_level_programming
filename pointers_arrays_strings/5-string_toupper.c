#include <stdio.h>
#include "main.h"

/**
 * string_toupper - changes all lower case to upper case
 * 
 * return:0
 */

char *string_toupper(char *string)
{
	int i = 0;

	while (string[i] == '\0')
	{
		if (string[i] >= 'a' && string[i] <= 'z')
		{
			string[i] = string[i] - 32;
		}

		i++;
	}

	return (string);
}
