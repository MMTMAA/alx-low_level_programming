#include "main.h"
/**
* _strchr - sjfhsjl
* @s: dlhl
* @c: klsk
* Return: slsvks
*/
char *_strchr(char *s, char c)
{
unsigned int i = 0;
while (s[i] != '\0')
{
if (s[i] == c)
{
return (&s[i]);
}
i++;
}

return ('\0');
}
