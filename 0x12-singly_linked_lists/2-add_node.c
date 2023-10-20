#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node - adds a new node at the beginning of a linked list
* @head: double pointer to the list_t list
* @str: new string to add in the node
*
* Return: the address of the new element, or NULL if it fails
*/
list_t *add_node(list_t **head, const char *str) /* str is a string */
/* head is a pointer to a pointer to a list_t struct */
{
list_t *new; /* create a new node */
unsigned int len = 0; /* initialize len to 0 */

while (str[len]) /* while the string is not NULL */
len++; /* increment len */

new = malloc(sizeof(list_t)); /* allocate memory for new */

if (!new) /* if malloc fails, return NULL */
return (NULL);

new->str = strdup(str); /* set new->str to the string */
new->len = len; /* set new->len to the length of the string */
new->next = (*head); /* set new->next to the head pointer */
(*head) = new; /* set the head pointer to new */

return (*head);
}
