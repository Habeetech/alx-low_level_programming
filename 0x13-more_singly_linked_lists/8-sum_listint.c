#include "lists.h"
/**
 * sum_listint - returns sum of listint_t list
 * @head: pointer to the first element
 * Return: 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
