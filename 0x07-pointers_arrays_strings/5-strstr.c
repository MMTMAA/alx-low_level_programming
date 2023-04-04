#include "main.h"
/**
 * _strstr - sfgfg
 * @haystack: sgfsfg
 * @needle: isgfgsfg
 * Return: Asgfsfg
 */
char *_strstr(char *haystack, char *needle)
{
int i = 0;
while (haystack[i] != '\0')
{
char *j = haystack;
char *z = needle;

while (*j == *z && *z != '\0')
{
j++;
z++;
}

if (*z == '\0')
return (haystack);
i++;
}
return (0);
}
