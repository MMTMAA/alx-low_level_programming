#include "main.h"
/**
 * _strpbrk - ddgdfg
 * @s: fdgfg
 * @accept: dfgfg
 * Return: vdfgfd
 */
char *_strpbrk(char *s, char *accept)
{
int i;

while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
return (s);
}
s++;
}

return ('\0');
}
