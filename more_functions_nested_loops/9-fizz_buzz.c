#include <stdio.h>
#include "main.h"

/**
 * fizz_buzz - a program that writes 1 - 100 & Fizz(multiple of 3) & Buzz(multiple of 5)
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


		if(n != 100)
			printf(" ");
	}
}

int main(void)
{
	fizz_buzz();
	return (0);
}
