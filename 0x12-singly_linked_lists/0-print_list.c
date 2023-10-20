#include <stdio.h>
#include "lists.h"

/**
* print_list - prints all the elements of a linked list
* @h: pointer to the list_t list to print
*
* Return: the number of nodes printed
*/
size_t print_list(const list_t *h)
{
size_t n = 0;

while (h) /* while h is not NULL */
{
if (!h->str) /* if h->str is NULL */
printf("[0] (nil)\n"); /* print [0] (nil) */
else
printf("[%u] %s\n", h->len, h->str); /* print [len] str */
h = h->next; /* set h to the next node */
n++; /* increment n */
}

return (n);
}
