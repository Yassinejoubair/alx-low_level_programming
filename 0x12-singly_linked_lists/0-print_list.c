#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	const list_t *cur = h;
	size_t co = 0;

	while (cur != NULL)
	{
		if (cur->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", cur->len, cur->str);
		co++;
		cur = cur->next;
	}
	return (co);
}
