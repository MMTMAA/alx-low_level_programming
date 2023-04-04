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
unsigned int sum = 0;
while (s[i] != '\0')
{
while (accept[j] != '\0')
{
if (s[i] == accept[j])
{
sum++;
}
j++;
}
i++;
}
return (sum);
}
