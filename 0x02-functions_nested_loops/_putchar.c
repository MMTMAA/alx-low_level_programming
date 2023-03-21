#include "main.h"
#include <unistd.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _putchar(char c)
{
char str[7] = "_putchar";
int i = 0;
while (i < 8)
{
putchar(str[i]);
i++;
}
putchar('\n');
}
