#include "main.h"

/**
 * leet - Encodes a strirng into 1337speak
 * @str: The string to be encoded
 *
 * Return: A pointer to the encoded string
 */

char *leet(char *str)
{
	int i = 0;
	/* 'i' represents the position of a character in str */
	int j;
	/* 'j' represents the position index of s[1] & s[2] */
	char s1[] = "aAeEoOtTlL";
	/* s[1] is the letters to be replaced */
	char s2[] = "4433007711";
	/* s[2] is the numbers we will use to replace the letters in s[1] */

	while (str[i] != '\0')
	/* while read the string from first index(i=0) to the null terminator */
	{
		for (j = 0; j < 10; j++)
		/* for every index you go through in str, increment from 0 to 10 for j */
		{
			if (str[i] == s1[j])
			/* if an index in str correspond to an index in s1 */
			{
				str[i] = s2[j];
				/* replace index in str w the same index position of s2 */
			}
		}
		i++;
		/* move along the string */
	}
	return (str);
}
