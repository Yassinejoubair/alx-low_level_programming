#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Add a new node at the end of a list.
 * @head: Address of the first node of a list.
 *
 * @n: Integer to insert in the new node.
 *
 * Return: Address of the new node.
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *te, *te2;

	te = malloc(sizeof(listint_t));
	if (te == NULL)
		return (NULL);

	te->n = n;
	te->next = NULL;

	if (*head == NULL)
	{
		*head = te;
		return (te);
	}

	te2 = *head;
	while (te2->next)
		te2 = te2->next;
	te2->next = te;
	return (te);
}
