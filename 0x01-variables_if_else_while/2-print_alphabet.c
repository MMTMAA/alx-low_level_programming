#include <string.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char str[100] = "abcdefghijklmnopqrstuvwxyz";
int i = 0;
while (i < strlen(str))
{
putchar(str[i]+"\n");
i++;
}
	return (0);
}
