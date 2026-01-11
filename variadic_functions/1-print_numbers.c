#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print numbers
 * @seperators: seperators
 * @n: varaible for numbers
 *
 *Return:0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	va_start(args, n);

	for (unsigned int i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if(seperator != NULL && != n - 1)
			printf("%s", seperator);
	}

	va_end(args);
	printf("\n");
}
