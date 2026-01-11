#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *print_list - prints all elements of a list
 *@h: pointer of list
 *
 * Return: count
 */

/*h is a head pointer*/
size_t print_list(const list_t *h)
{
	/*keeps count of nodes being print*/
	size_t count = 0;

	/*current is a traversal pointer for h*/
	const list_t *current = h;

	/*loop until we reach NULL(which means no next node)*/
	while (current != NULL)
	{
		/*if theres no string*/
		if (current->str == NULL)
			printf("[0] (nil)\n");

		else
			/*prints the length of the string and the string itself*/
			printf("[%u] %s\n", current->len, current->str);

		count++;
		current = current->next;
	}
	return (count);
}
