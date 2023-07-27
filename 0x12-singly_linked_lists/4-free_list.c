#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees the linked list we want to
 * @head: list_t list we will to free
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
