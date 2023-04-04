#include "main.h"
/**
 * print_chessboard - sfgg
 * @a: agsfg
 */
void print_chessboard(char (*a)[8])
{
int i;
int j = 0;
for (i = 0; i < 8; i++)
{
while (j < 8)
{
_putchar(a[i][j]);
j++;
}
_putchar('\n');
}
}
