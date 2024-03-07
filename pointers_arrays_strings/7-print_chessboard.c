#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (succes)
 */
void print_chessboard(char (*a)[8])
{
int i, n;

i = n = 0;
while (i < 8)
{
    n = 0;
    while (n < 8)
{
_putchar(a[i] [n]);
n++;
}
_putchar('\n');
i++;
}
}
