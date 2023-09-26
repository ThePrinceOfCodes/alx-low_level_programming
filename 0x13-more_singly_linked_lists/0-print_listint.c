#include "lists.h"

/**
 * print_listint - PRINTS ALL ELEMENTS IN A LINKED LIST
 * @h: linked list of type listint_t to print
 *
 * Return: NUMBER OF ELEMENTS IN THE LIST 
 */
size_t print_listint(const listint_t *h)
{
	size_t total = 0;

	while (h)
	{
		printf("%d\n", h->n);
		total++;
		h = h->next;
	}

	return (total);
}
