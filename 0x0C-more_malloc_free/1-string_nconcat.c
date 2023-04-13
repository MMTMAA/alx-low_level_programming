#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat - xcv
 * @s1: xcvcv
 * @s2: xcvxcv
 * @n: xcvcv
 * Return: zczcvz
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *p;
unsigned int i = 0;
unsigned int j = 0;
unsigned int lenS1 = 0;
unsigned int lenS2 = 0;
while (s1[lenS1] != '\0')
lenS1++;
while (s2[lenS2] != '\0')
lenS2++;
if (s1 == NULL && s2 == NULL)
return (NULL);
else if (n < len2)
p = malloc(sizeof(char) * (lenS1 + n + 1));
else
p = malloc(sizeof(char) * (lenS1 + lenS2 + 1));
while (i < lenS1)
{
p[i] = s1[i];
i++;
}
if (n < lenS2)
{
while (i < (lenS1 + n))
{
p[i] = s2[j];
i++;
j++;
}
}
else if (n >= lenS2)
{
while (i < (lenS1 + lenS2))
{
p[i] = s2[j];
i++;
j++;
}
}
p[i] = '\0';
return (p);
}
