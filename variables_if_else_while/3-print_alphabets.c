#include <stdio.h>

/**
* main - prints Hello, world
* Return: 0
*/

int main (void)
{
	char ptas;
	char ptes;

	for (ptas = 'a'; 'z' >= ptas; ptas++)
	for (ptes = 'A'; 'Z' >= ptes; ptes++)
	putchar(ptas);
	putchar(ptes);
	putchar('\n');

	return (0);
}

