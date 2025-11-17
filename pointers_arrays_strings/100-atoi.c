#include "main.h"
#include <stdio.h>

/**
 * atoi - converts string to an integer
 * @s: variable to a charracter
 *
 * Return: 0
 */

int _atoi(char *s);
{
	int i = 0;
	int sign = 1;
	int num = 0;
	int found_digit = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign = sign * -1
		else if (s[i] == '+')
			;
		else if(s[i] >= '0' && s[i] <= '9')
		{
			found_digit = 1;
			num = num * 10 + (s[i] - '0');
		}
		else if (found_digit)
			break;

		i++
	}

	return (num * sign);
}
