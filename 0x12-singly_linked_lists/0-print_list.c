#include <stdio.h>
#include "lists.h"

/**
 * Task zero Print list
 * Assignment answered by Adjei Prince Opare
 */

size_t print_list(const list_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
        printf("[%d] %s\n", (h->str ? h->len : 0), (h->str ? h->str : "(nil)"));
        h = h->next;
        count++;
    }

    return count;
}

