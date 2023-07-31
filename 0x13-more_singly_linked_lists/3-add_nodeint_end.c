#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds new nodes to the end of the listint_t list
 * @head: double pointer to the first element
 * @n: the element
 * Return: the address of the new element or NULL, if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNodeEnd = malloc(sizeof(listint_t));

	if (newNodeEnd == NULL)
	{
		return (NULL);
	}
	newNodeEnd->n = n;
	newNodeEnd->next = NULL;
	if (*head == NULL)
	{
		*head = newNodeEnd;
	}
	else
	{
		listint_t *temp = *head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newNodeEnd;
	}
	return (newNodeEnd);
}
