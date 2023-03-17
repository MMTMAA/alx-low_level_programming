#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char str[24] = "abcdfghijklmnoprstuvwxyz";
int i = 0;
while (i < 24)
{
putchar(str[i]);
i++;
}
putchar('\n');
return (0);
}
