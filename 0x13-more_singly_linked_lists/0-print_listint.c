#include "lists.h"

/**
 * print_listint - prints all of  the elements in the  linked list
 * @h: linked list  listint_t we have to print
 * Return: number of the  nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
