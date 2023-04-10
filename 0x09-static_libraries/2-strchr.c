#include "main.h"
/**
 * _strchr - bcnv
 * @s: bcnv
 * @c: cbn
 * Return: cnbc
 */
char *_strchr(char *s, char c)
{
int i = 0;
while (s[i] >= '\0')
{
if (s[i] == c)
return (&s[i]);

i++;
}
return (0);
}
