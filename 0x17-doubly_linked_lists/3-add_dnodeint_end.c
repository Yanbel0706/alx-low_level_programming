nclude "lists.h"

/**
 ** add_dnodeint_end -  a function that adds a new node at the
 ** end of a dlistint_t list.
 ** @head: head of the list
 ** @n: value of elements
 ** Return: a pointer to the new element.
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h = (*head), *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (h == NULL)
	{
		(*head) = new;
		return (new);
	}
	while (h->next != NULL)
	{
		h = h->next;
	}
	new->prev = h;
	h->next = new;

	return (new);
}
