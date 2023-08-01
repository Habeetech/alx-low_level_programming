#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees the listint_t list.
 * @h: Double pointer to the first element of the list.
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current;
	listint_t *next;
	unsigned int count = 0;

	while (*h != NULL)
	{
		current = *h;
		next = current->next;
		free(current);
		count++;
		*h = next;
	}
	return (count);
}
