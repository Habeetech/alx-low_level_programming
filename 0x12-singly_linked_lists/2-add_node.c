#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_node - adds a new node to the beginning of list_t list
 * @head: double pointer to the start of the list
 * @str: string to be duplicated and added to the new node
 * Return: address of the new element or NULL if it failed
 * Note: str needs to be duplicated, and you're allowed to use strdup
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->len = strlen(str);
	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
