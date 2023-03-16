#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;
	
	printf("char size: %lu \n"(unsigned long)sizeof(a));
	printf("int size: %lu \n"(unsigned long)sizeof(b));
	printf("long int size: %lu \n"(unsigned long)sizeof(c));
	printf("long long int size: %lu \n"(unsigned long)sizeof(d));
	printf("float size: %lu \n"(unsigned long)sizeof(e));

return (0);
}
