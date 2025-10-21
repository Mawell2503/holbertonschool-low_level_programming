#include <stdio.h>

/**
* main - prints Hello, world
* Return: 0
*/

int main(void)
{
	char h;
	
	for (h = '0'; h >= '9'; h++)
		putchar(h);
	for (h = 'A'; h>= 'F'; h++)
		putchar(h);
	putchar('\n');

	return(0);
}
