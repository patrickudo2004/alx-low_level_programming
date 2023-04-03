#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - Free nodes and list
 * @head: pointer
 */
void free_listint(listint_t *head)
{

	if (head == NULL)
	{
    		return;
	}
	free_listint(head->next);
	free(head);
}
