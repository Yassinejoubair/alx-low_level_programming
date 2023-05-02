#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a list.
 * @head: Address of the first node of a list.
 **/

void free_listint(listint_t *head)
{
	listint_t *tpe, *tpe2;

	tpe = head;
	while (tpe != NULL)
	{
		tpe2 = tpe->next;
		free(tpe);
		tpe = tpe2;
	}
}
