#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: no return.
 */
void free_list(list_t *head)
{
	list_t *cur = head;

	while (cur != NULL)
	{
		list_t *temp = cur;

		cur = cur->next;
		free(temp->str);
		free(temp);
	}
}
