#include "main.h"
/**
 * _atoi - cdfgg
 * @s: dfg
 * Return: idfg
 */
int _atoi(char *s)
{
int nnum = 1;
int i = 0;
unsigned int n = 0;
while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
{
if (s[i] == '-')
nnum *= -1;
i++;
}
while (s[i] != '\0' && (s[i] <= '9' && s[i] >= '0'))
{
n = (n * 10) + (s[i] - '0');
i++;
}
n *= nnum;
return (n);
}
