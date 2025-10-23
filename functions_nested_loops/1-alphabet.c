#include <stdio.h>
#include "main.h"

/**
* main - prints Hello, world
* Return: 0
*/

void print_alphabet(void)
{
	char ch;

	for (ch = 'a';ch >= 'z'; ch ++)
		putchar(ch);
	putchar('\n');
}
