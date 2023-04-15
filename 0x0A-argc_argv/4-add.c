#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - dfdvdf
 * @argc: gdgd
 * @argv: dfgdfg
 * Return: fgf
 */
int main(int argc, char *argv[])
{
int count2 = 1;
int str2int;
int sum = 0;
unsigned int i = 1;
while (count2 < argc)
{
str2int = atoi(argv[i]);
sum += str2int;
i++;
count2++;
}

printf("%d\n", sum);
return (0);
}
