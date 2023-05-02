#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Insert a new node at a given positiion.
 * @head: First node address.
 * @idx: Position of the new node to be inserted in.
 * @n: Data of the new node.
 * Return: Address of the new node.
 **/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nn, *tp;
	unsigned int i = 0;

	if (*head == NULL && idx != 0)
		return (NULL);
	if (idx != 0)
	{
	tp = *head;
	for (; i < idx - 1 && tp != NULL; i++)
		tp = tp->next;
	if (tp == NULL)
		return (NULL);
	}
	nn = malloc(sizeof(listint_t));
	if (nn == NULL)
		return (NULL);
	nn->n = n;
	if (idx == 0)
	{
		nn->next = *head;
		*head = nn;
		return (nn);
	}
	nn->next = tp->next;
	tp->next = nn;
	return (nn);
}
