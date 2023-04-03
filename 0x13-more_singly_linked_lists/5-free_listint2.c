#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - Free nodes and list and set head to null
 * @head: pointer
 */
void free_listint2(listint_t **head)
{

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		listint_t *tmp = *head;
		(*head) = (*head)->next;
		free(tmp);
	}
}
