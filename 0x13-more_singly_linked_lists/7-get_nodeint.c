#include "lists.h"
/**
 * get_nodeint_at_index - returns nth node of a listint_t list
 * @head: pointer to the first element
 * @index: index of the node, starting at 0
 * Return: NULL, if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
		{
			return (head);
		}
		head = head->next;
		count++;
	}
	return (NULL);
}
