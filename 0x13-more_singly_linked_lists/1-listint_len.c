#include <stdio.h>
#include "lists.h"
/**
 *  * listint_len - sldjhvjsdan
 *   * @h: lvlsdmvc
 *    * Return: asfsdf
 */

size_t listint_len(const listint_t *h)
{

	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
