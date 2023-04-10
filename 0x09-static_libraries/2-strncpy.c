#include "main.h"
/**
 * _strncpy - csvv
 * @dest: vsvs
 * @src: vsvs
 * @n: svvsvs
 * Return: cvxcvx
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
