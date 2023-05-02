#include "lists.h"

size_t looped(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 *         Otherwise - the number of unique nodes in the list.
 */
size_t looped(listint_t *head)
{
	listint_t *tp, *he;
	size_t nod = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	t = head->next;
	h = (head->next)->next;
	while (he)
	{
		if (tp == h)
		{
			tp = he;
			while (tp != he)
			{
				nod++;
				tp = tp->next;
				he = he->next;
			}
			tp = tp->next;
			while (tp != he)
			{
				node++;
				tp = tp->next;
			}
			return (nod);
		}
		tp = tp->next;
		he = (he->next)->next;
	}
	return (0);
}

/**
 * free_listint_safe - Frees a listint_t list safely (ie.
 *                     can free lists containing loops)
 * @h: A pointer to the address of
 *     the head of the listint_t list.
 *
 * Return: The size of the list that was freed.
 *
 * Description: The function sets the head to NULL.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tp;
	size_t nod, ind;

	nod = looped(*h);
	if (nod == 0)
	{
		for (; h != NULL && *h != NULL; nod++)
		{
			tp = (*h)->next;
			free(*h);
			*h = tp;
		}
	}
	else
	{
		for (ind = 0; ind < nod; ind++)
		{
			tp = (*h)->next;
			free(*h);
			*h = tp;
		}

		*h = NULL;
	}
	h = NULL;
	return (nod);
}
