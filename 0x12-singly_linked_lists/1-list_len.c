#include "lists.h"

/**
* list_len - Calculate the number of elements.
* @h: Pointer to a list.
* Return: Integer.
**/

size_t list_len(const list_t *h)
{
const list_t *temp; /* create a temporary pointer */
unsigned int counter = 0; /* initialize counter to 0 */

temp = h; /* set temp to the start of the list */
while (temp) /* while temp is not NULL */
{
counter++; /* increment counter */
temp = temp->next; /* set temp to the next node */
}
return (counter);
}
