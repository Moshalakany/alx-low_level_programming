#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
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
