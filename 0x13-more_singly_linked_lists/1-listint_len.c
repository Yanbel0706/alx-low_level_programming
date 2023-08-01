#include "lists.h"

/**
 * listint_len - returns the number of elements in the  linked list
 * @h: linked list  listint_t to traverse
 * Return: nombre  of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}

	return (number);
}
