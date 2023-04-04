#include "main.h"
/**
* _strpbrk - sjfhsjl
* @accept: dlhl
* @s: klsk
* Return: slsvks
*/
char *_strpbrk(char *s, char *accept)
{
unsigned int i = 0;
unsigned int j = 0;
while (s[i] != '\0')
{
while (accept[j] != '\0')
{
if (s[i] == accept[j])
{
return (s);
}
j++;
}
i++;
}
return ('\0');
}
