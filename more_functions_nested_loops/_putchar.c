#include <unistd.h>
#include "main.h"

/**
 *_putchar - prints singular characters
 *@c: character to print
 *
 *Return:1 on success or -1 on errror
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
