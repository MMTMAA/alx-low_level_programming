#include "main.h"
/**
 * _strncpy - copy
 * @dest: value
 * @src: value
 * @n: value
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int j = 0;

while (j < n && src[j] != '\0')
{
dest[j] = src[j];
j++;
}
while (j < n)
{
dest[j] = '\0';
j++;
}

return (dest);
}
