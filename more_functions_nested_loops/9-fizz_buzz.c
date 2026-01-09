#include <stdio.h>
#include "main.h"

/**
 * fizz_buzz - prints number 1 - 100 with FizzBuzz rules
 * @
 *
 * Return: 0
 */

void fizz_buzz(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz");

		else if (n % 3 == 0)
			printf("Fizz");

		else if (n % 5 == 0)
			printf("Buzz");

		else
			printf("%d", n);


		if (n != 100)
			printf(" ");
	}
	printf("\n");
}

int main(void)
{
	fizz_buzz();
	return (0);
}
