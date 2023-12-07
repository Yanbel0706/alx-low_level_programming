#include "lists.h"

/**
 ** print_dlistint - a function  prints all the elements of
 ** a dlistint_t list.
 ** @h: a pointer to the first node in the list.
 ** Return: a number of nodes.
 **/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t  counter = 0;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		counter += 1;
	}
	return (counter);
}
