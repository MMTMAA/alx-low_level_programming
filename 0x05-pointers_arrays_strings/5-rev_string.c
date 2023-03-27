#include "main.h"
/**
 * rev_string - jshdfkj
 * @s: dkfgl
 */
void rev_string(char *s)
{
int len = 0;
int middle;
char temp;
int i;
while (s[len] != '\0')
{
len++;
}
middle = len / 2;
for (i = 0; i < middle; i++)
{
temp = s[i];
s[i] = s[len - i - 1];
s[len - i - 1] = temp;
}
}
