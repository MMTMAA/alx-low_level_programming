#include <stdlib.h>
#include "main.h"
/**
 * *_calloc - sdvsdv
 * @nmemb: number of elements in the arra
 * @size: size of each element
 * Return: memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *p;
unsigned int i = 0;
unsigned int blocks;

if (nmemb == 0 || size == 0)
return (NULL);

p = malloc(size * nmemb);

if (p == NULL)
return (NULL);

blocks = size *	nmemb;

while (i < blocks)
{
s[i] = 0;
i++;
}

return (p);

}
