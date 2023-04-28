#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *  * add_node - sdfsdf
 *   * @head: sdfsdf
 *    * @str: dfsdf
 *     * Return: xzczxczx
      */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newn;
	unsigned int length = 0;

while (str[length])
length++;

	newn = malloc(sizeof(list_t));
	if (newn == NULL)
		return (NULL);

	newn->str = strdup(str);
	newn->len = length;
	newn->next = *head;
	*head = newn;

	return (*head);
}
