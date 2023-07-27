#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all of the elements in the linked list
 * @h: pointer to  list_t list we have to print
 *
 * Return:  a value of s
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);
}
