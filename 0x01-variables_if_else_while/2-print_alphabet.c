#include <string.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char str[26] = "abcdefghijklmnopqrstuvwxyz";
int i = 0;
while (i < 26)
{
putchar(str[i]);
i++;
}
putchar('\n');
	return (0);
}
