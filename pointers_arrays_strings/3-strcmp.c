#include <stdio.h>
#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: 1 or 0 when wrong
 */


int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int ans;

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}

	ans = s1[i] - s2[i];

	return (ans);
}
