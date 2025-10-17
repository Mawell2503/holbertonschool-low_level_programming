#include <stdio.h>

/**
* main - prints Hello, world
* Return: 0
*/

int main (void)
{
	char ptas;
	for (ptas = 'a'; 'z' >= ptas; ptas++)
	putchar(ptas);
	putchar('\n');

	return (0);
}
