#include "lists.h"

/**
 * sum_listint - calculates the somme of all the values in a listint_t list
 * @head: first node in the linked list
 * Return: result somme
 */
int sum_listint(listint_t *head)
{
	int somme = 0;
	listint_t *temp = head;

	while (temp)
	{
		somme += temp->n;
		temp = temp->next;
	}

	return (somme);
}
