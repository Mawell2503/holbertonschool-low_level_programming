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
	int count = 0;
	int count2 = 0;

	for (; s1[i] != '\0'; i++)
		count++;

	for (; s2[i] != '\0'; i++)
		count2++;

	if (count != count2)
		return(count - count2);

	return(1);
}
