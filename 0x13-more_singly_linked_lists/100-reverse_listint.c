#include "lists.h"

/**
 * reverse_listint - reverse the list
 * @head: point to the first node at the list
 * Return: point to the first node of the new linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = NULL;
	listint_t *previous = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}

	*head = previous;

	return (*head);
}
