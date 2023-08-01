#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes node at a specified index
 * @head: double pointer to the first element
 * @index: index at which the node is to be deleted
 * Return: 1 if it succeeded, and -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node, *delete_node;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		delete_node = *head;
		*head = (*head)->next;
		free(delete_node);
		return (1);
	}

	current_node = *head;
	for (i = 0; current_node != NULL && i < index - 1; i++)
	{
		current_node = current_node->next;
	}
	if (current_node == NULL || current_node->next == NULL)
		return (-1);
	delete_node = current_node->next;
	current_node->next = delete_node->next;
	free(delete_node);
	return (1);
}
