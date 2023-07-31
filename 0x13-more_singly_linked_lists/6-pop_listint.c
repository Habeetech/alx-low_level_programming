#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of listint_t list
 * @head: double pointer to the first element
 * Return: head node's data (n)
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *delete;

	if (*head == NULL)
	{
		return (0);
	}
	delete = *head;
	data = delete->n;

	*head = (*head)->next;
	free(delete);

	return (data);
}
