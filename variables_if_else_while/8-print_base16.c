#include <stdio.h>

/**
* main - base 16
* Return: 0
*/

int main(void)
{
	char h;
	
	
	for (h = '0'; h <= '9'; h++)
		putchar(h);

	for (h = 'A'; h>= 'F'; h++)
		putchar(h);
	putchar('\n');

	return(0);
}
