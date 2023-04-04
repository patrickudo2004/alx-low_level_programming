#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list safely
 * @h: A pointer to a pointer to the head of the list
 *
 * Return: The number of nodes freed
 */
size_t free_listint_safe(listint_t **h)
{
    size_t count = 0;
    listint_t *current, *temp;

    if (h == NULL || *h == NULL)
            return (0);

    current = *h;
    while (current != NULL)
    {
        count++;
        if (current <= current->next)
        {
            printf("Loop detected, freeing remaining nodes\n");
            current->next = NULL;
            break;
        }
        temp = current;
        current = current->next;
        free(temp);
    }
    *h = NULL;
    return (count);
}
