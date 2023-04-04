#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

size_t print_listint_safe(const listint_t *head)
{
    size_t count = 0;
    const listint_t *slow, *fast;

    if (head == NULL)
        exit(98);

    slow = head;
    fast = head;

    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
           printf("-> [%p] %d\n", (void *)slow, slow->n);
           exit(98);
        }
     }

     while (head != NULL)
     {
        printf("[%p] %d\n", (void *)head, head->n);
        head = head->next;
        count++;
     }

     return (count);
}
