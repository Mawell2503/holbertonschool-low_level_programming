#include <stdio.h>
#include "main.h"

/**
 * _strlen - measures a string
 * @s: pointer to a char
 *
 * Return: length
 */

int _strlen(char *s)
{
	int length = 0;		/*tarta counter so you can keep of how many characters are in your string*/

	for(;*s != '\0';s++)	/*for loop has ( initial value:initialization; condition; increment/decrement*/
				/* (;) -> initialization not needed  because 's' already starts at the beginning of the string*/
				/* (*s != '\0') -> condition: as long as what "s points too(*s)" does "not equal(!=)" to the "null terminator('\0')"*/
				/* (s++) -> increase s(not what s points to(*s))*/
		length++;

	return length;
}
