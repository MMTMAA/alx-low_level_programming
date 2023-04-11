#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - sdhfsdj
 * @s1: sdfsdf
 * @s2: sfsdfd
 * Return: skfgsjkl
 */
char *str_concat(char *s1, char *s2)
{
int len1, len2;
int i = 0;
int j = 0;
char *p;
int x;

if (s1 == NULL)
return (NULL);
if (s2 == NULL)
return (NULL);

len1 = strlen(s1);
len2 = strlen(s2);
p = malloc(sizeof(char) * (len1 + len2 + 1));

if (p == NULL)
return (NULL);

while (i < len1)
{
p[i] = s1[i];
i++;
}
x = len1 + len2;
while (i < x)
{
p[i] = s2[j];
j++;
i++;
}
p[i] = NULL;

return (p);
}
