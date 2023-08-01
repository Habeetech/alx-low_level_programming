#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints listint_t linked lists
 * if the function fails, exit with status EXIT_FAILURE
 * @head: pointer to the first element
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current_node;
	unsigned int i;

	for (i = 0; head != NULL; i++)
	{
		current_node = head;
		printf("%d\n", current_node->n);
		head = head->next;
	}
	return (i);
}
