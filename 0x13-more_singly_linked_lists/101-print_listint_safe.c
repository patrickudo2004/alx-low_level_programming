#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the head of the list.
 *
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
    size_t count = 0;
    const listint_t *curr = head;
    const listint_t *prev = NULL;
    const listint_t *temp = NULL;

    while (curr != NULL)
    {
        printf("[%p] %d\n", (void *)curr, curr->n);
        count++;

        if (curr < curr->next)
            curr = curr->next;
        else
        {
            temp = curr;
            curr = curr->next;
            while (temp != prev)
            {
                printf("[%p] %d\n", (void *)temp, temp->n);
                count++;
                temp = temp->next;
            }
            printf("-> [%p] %d\n", (void *)temp, temp->n);
            exit(98);
        }
<<<<<<< HEAD
     }

     while (head != NULL)
     {
        printf("[%p] %d\n", (void *)head, head->n);
        head = head->next;
        count++;
     }
=======
        prev = curr;
    }
>>>>>>> 0e1a235c4ff53efe60d00ee18f44555cfdd42093

    return (count);
}
