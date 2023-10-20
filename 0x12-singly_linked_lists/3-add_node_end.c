#include "lists.h"
/**
* add_node_end - Add a new node at the end of a list.
* @head: Address of the first node of a list.
* @str: Address of the string to insert into the new node.
* Return: Address of the new node.
**/

list_t *add_node_end(list_t **head, const char *str) /* str is a string */
/* head is a pointer to a pointer to a list_t struct */
{
list_t *temp, *temp2; /* create a new node */
unsigned int length = 0; /* initialize len to 0 */

if (str == NULL) /* if the string is NULL */
return (NULL);

temp = malloc(sizeof(list_t)); /* allocate memory for temp */
if (temp == NULL) /* if malloc fails, return NULL */
return (NULL);

temp->str = strdup(str); /* set temp->str to the string */
if (temp->str == NULL) /* if strdup fails, return NULL */
{
free(temp); /* free temp */
return (NULL);
}
while (str[length]) /* while the string is not NULL */
length++; /* increment len */
temp->len = length; /* set temp->len to the length of the string */
temp->next = NULL; /* set temp->next to NULL */

if (*head == NULL) /* if the list is empty */
{
*head = temp; /* set the head pointer to temp */
return (temp);
}

temp2 = *head; /* set temp2 to the head pointer */
while (temp2->next) /* while temp2->next is not NULL */
temp2 = temp2->next; /* set temp2 to the next node */
temp2->next = temp; /* set temp2->next to temp */
return (temp);
}
