#include "lists.h"

/**
 * add_nodeint - ADDS NEW ELEMENT TO THE LIST
 * @head: POINTER TO THE FIRST NODE ON THE LIST
 * @n: DATA TO INSERT IN THE NEW NODE
 *
 * Return: RETURN POINTER TO THE NEW NODE OR NULL IF IT FAILS
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
