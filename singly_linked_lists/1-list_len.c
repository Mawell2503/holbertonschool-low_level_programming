#include "main.h"
#include <stdio.h>

/**
 * list_len - count number of elements in a list
 * @h: variable of a costant which is a list
 *
 * return: 0
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h -> next;
	}

	return count;
}
