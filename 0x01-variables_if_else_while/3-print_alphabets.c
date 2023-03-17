#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char str[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i = 0;
while (i < 52)
{
putchar(str[i]);
i++;
}
putchar('\n');
return (0);
}
