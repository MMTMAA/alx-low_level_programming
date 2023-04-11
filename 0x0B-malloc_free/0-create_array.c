#include <stdlib.h>
#include "main.h"
/**
 * create_array - jsksdj
 * @size: lhdfl
 * @c: lsvljs
 * Return: jsvjksh
 */
char *create_array(unsigned int size, char c)
{
char *s;
unsigned int i = 0;

s = malloc(sizeof(char) * size);

if (size <= 0 || s == NULL)
return (NULL);

while (i < size)
{
s[i] = c;
i++;
}
return (s);
}
