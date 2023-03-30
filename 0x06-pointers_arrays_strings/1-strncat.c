#include "main.h"
/**
 * _strncat - concatenate two strings
 * @dest: value
 * @src: value
 * @n: characters count
 * Return: dghd
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;
while (dest[j] != '\0')
{
		j++;
}
while (j < n && src[i] != '\0')
{
dest[j] = src[i];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
