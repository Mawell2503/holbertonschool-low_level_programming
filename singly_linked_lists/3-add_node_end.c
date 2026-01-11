#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - function that adds a new node
 * @head:
 * @str:
 *
 * Return:
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node == NULL->str)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	while (temp->next)
		temp = temp->next;

	temp->next = new_node;

	return (new_node);
}

