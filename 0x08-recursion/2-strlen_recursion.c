#include "main.h"
/**
 * _strlen_recursion - dfsg
 * @s: dsgds
 * Return: dgfsg
 */
int _strlen_recursion(char *s)
{
int l = 0;
if (*s)
{
l++;
l = l + _strlen_recursion(s + 1);
}
return (l);
}
