#include <stdio.h>
#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 *
 * return:0
 */

char *cap_string(char *s)
{
	int sep;
	int is_sep = (sep == ' ' || sep == ',' || sep == ';' || sep == '.' || sep == '!' || sep == '?');
	int i = 0;

	if (s[i] >= 'a' && s[i] <= 'z')
	{
		s[i] = s[i] - 32;
	}
	while (s[i] != '\0')
	{
		if (s[i] == is_sep)
		{
			i++;
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
			}

		}
		i++;
	}
	return (s);
}
