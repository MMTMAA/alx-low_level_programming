#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - sjhfsdkl
 * @str: slkdfksdfm
 * Return: sldfjklsdk
 */
char *_strdup(char *str)
{
int len;
int i = 0;
char *p;

if (str == NULL)
return (NULL);

len = strlen(str);
p = malloc(sizeof(char) * (len + 1));

if (p == NULL)
return (NULL);

while (i < len)
{
p[i] = str[i];
i++;
}
return (p);
}
