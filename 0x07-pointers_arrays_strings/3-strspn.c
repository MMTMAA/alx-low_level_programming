#include "main.h"
/**
* _strspn - sjfhsjl
* @accept: dlhl
* @s: klsk
* Return: slsvks
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0;
unsigned int j = 0;
unsigned int x = 0;
unsigned int y = 0;
unsigned int z = 0;
while (s[i] != '\0')
{
i++;
}

while (accept[j] != '\0')
{
j++;
}

for (x = 0; x <= j; x++)
{
for (y = 0; y <= i; y++)
{
if (s[y] == accept[x])
{
z++;
}
}
}
return (z);
}
