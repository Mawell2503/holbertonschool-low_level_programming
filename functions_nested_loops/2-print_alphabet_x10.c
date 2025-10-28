#include "main.h"

/**
* main - prints 10 time the alphabet, in lowecase
* Followed by a new line
*/

void print_alphabet_x10(void)
{
	int line;
	char c;

	for (line = 0; line < 10; line++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
