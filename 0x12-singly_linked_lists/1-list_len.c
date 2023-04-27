#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t list_len(const list_t *h)
{
	const list_t *cur = h;
	size_t co = 0;

	while (cur != NULL)
	{
		co++;
		cur = cur->next;
	}
	return (co);
}
