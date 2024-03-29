#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listin_len - returns the number of elemts in a linked
 * listint_t list
 * @h: pointer to head of list
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
