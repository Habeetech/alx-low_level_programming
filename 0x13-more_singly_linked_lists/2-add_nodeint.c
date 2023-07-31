#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - add nodes to listint_t lists
 * @head: double pointer to the first element
 * @n: the element;
 * Return: the address of the new element or NULL, if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
