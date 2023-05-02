#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Print elements of a singly linked list.
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t print_listint(const listint_t *h)
{
	const listint_t *t;
	unsigned int cn = 0;

	t = h;
	while (t)
	{
		printf("%d\n", t->n);
		cn++;
		t = t->next;
	}
	return (cn);
}
