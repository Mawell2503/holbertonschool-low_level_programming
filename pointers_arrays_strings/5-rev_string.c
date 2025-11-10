#include <stdio.h>
#include "main.h"

/**
 * rev_string - reversing a string
 * @s: pointer to a char
 *
 * Return: 0
 */

void rev_string(char *s)
{
	int length = 0;
	char begi;
	int i;

	while (s[length] != '\0')
	{
		length++;
	}

	length--;
	i = 0;

	while (length > i)
	{
		begi = s[i];
		s[i] = s[length];
		s[length] = begi;
		i++;
		length--;
	}
}
