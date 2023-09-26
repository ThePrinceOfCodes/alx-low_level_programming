#include "lists.h"

/**
 * listint_len - RETURNS NUMBER OF ELEMENTS IN A LINKED LIST
 * @h: linked list of type listint_t to traverse
 *
 * Return: NUMBER OF NODES
 */
size_t listint_len(const listint_t *h)
{
	size_t total = 0;

	while (h)
	{
		total++;
		h = h->next;
	}

	return (total);
}
