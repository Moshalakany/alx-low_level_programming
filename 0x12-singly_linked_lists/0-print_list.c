#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: The list_t list.
 *
 * Return: The number of nodes in h.
 */

typedef struct node {
    char *str;
    size_t len;
    struct node *next;
} list_t;

size_t print_list(const list_t *h)
{
    size_t size = 0;

    for (const list_t *current = h; current; current = current->next)
    {
        if (!current->str)
            printf("[0] (nil)\n");
        else
            printf("[%zu] %s\n", current->len, current->str);
        
        size++;
    }

    return size;
}
