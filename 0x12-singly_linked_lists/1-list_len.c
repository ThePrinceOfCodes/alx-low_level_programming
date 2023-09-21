#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the length of the list
 * @h: pointer to the list
 *
 * Return: number of elements
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
