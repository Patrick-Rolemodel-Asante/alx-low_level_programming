#include <stdlib.h>
#include "lists.h"

/**
* free_list - frees a linked list
* @head: list_t list to be freed
*/
void free_list(list_t *head) /* head is a pointer to a list_t struct */
{
list_t *tmp; /* create a temporary list_t struct */

while (head) /* while head is not NULL */
{
tmp = head->next; /* set tmp to the next node */
free(head->str); /* free the string */
free(head); /* free the node */
head = tmp; /* set head to tmp */
}
}
