#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - prints Hello, world
* Return: 0
*/

int main(void)
{
	int n;
	int d = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5);
		printf("Last digit of %d is %d and is greater than 5", n, d);
	else if (n < 6);
		printf("Last digit of %d is %d and is less than 6 and not 0", n, d);
	else (n = 0);
		printf("Last digit of %d is %d and is 0", n, d);
	return (0);
}
