#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - free the memory allocated in nodes creating
 * @head: double pointer to the first element
 * Return: none
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
}
