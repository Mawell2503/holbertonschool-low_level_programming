#include <stdio.h>

/**
* main - prints Hello, world
* Return: 0
*/

int main(void)
{
	char ptas;

	for(ptas = 'a'; ptas <= 'z'; ptas++)
		putchar(ptas);

	for (ptas = 'A'; ptas <= 'Z'; ptas++)
		putchar(ptas);

	putchar('\n');

	return (0);
}
