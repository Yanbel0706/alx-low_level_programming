#include <stdlib.h>
#include "lists.h"

/**
 * list_len - to return  number of the elements in a linked list
 * @h: pointing in to the list_t
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
