#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees memory allocated to list_t
 * @head: pointer to the start of the list
 * Return: None
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
        temp = head->next;
        free(head->str);
        free(head);
        head = temp;
	}
}
