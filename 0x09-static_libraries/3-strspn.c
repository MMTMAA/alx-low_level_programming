#include "main.h"
/**
 * _strspn - dgdh
 * @s: fgdfg
 * @accept: dfgfd
 * Return: dgf
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int num = 0;
int j = 0;
int i = 0;


while (s[i] != '\0')
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
{
num++;
break;
}
else if (accept[j + 1] == '\0')
return (num);
}
i++;
}
return (num);
}
