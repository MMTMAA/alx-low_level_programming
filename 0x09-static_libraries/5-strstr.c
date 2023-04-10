#include "main.h"
/**
 * _strstr - fsdfsf
 * @haystack: fsdfs
 * @needle: fsdf
 * Return: fsdfs
 */
char *_strstr(char *haystack, char *needle)
{
int i = 0;
char *h = haystack;
char *n = needle;
while (haystack[i] != '\0')
{
while (*h == *n && *n != '\0')
{
h++;
n++;
}
if (*n == '\0')
return (haystack);
i++;
}
return (0);
}
