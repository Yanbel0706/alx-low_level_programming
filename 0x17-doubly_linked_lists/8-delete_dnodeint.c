#include "lists.h"

/**
 ** delete_dnodeint_at_index - a function that deletes the node at
 ** index index of a dlistint_t linked list.
 ** @head: head of the list
 ** @index: index of the node to delete.
 ** Return: 1 in case of success, -1 in case of failure.
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *pointer = (*head);
	unsigned int counter = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		(*head) = pointer->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(pointer);
		return (1);
														}
	while (pointer != NULL)
	{
		if (index == counter)
		{
			if (pointer->next != NULL)
			{
				pointer->next->prev = pointer->prev;
																}
			pointer->prev->next = pointer->next;
			free(pointer);
			return (1);
		}
		pointer = pointer->next;
		counter += 1;
	}
	return (-1);
}
