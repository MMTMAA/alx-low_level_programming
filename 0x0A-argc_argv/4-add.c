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
unsigned int count1 = 1;
unsigned int count2 = 1;
int str2int;
int sum = 0;


while (count1 < argc)
{
if (!isdigit(argv[count1]))
printf("Error\n")
return (1);
count1++;
}

while (count2 < argc)
{
str2int = atoi(argv[count2]);
sum += str2int;
count2++;
}

printf("%d\n", sum);
return (0);
}
