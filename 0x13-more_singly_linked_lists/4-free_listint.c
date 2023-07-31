#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - free the memory allocated in nodes creating
 * @head: pointer to the first element
 * Return: none
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
