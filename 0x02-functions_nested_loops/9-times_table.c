#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 */
void times_table(void)
{
int i, j, prod, tens, ones;

for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
prod = i * j;
tens = prod / 10;
ones = prod % 10;

if (j == 0)
{
_putchar('0');
}
else if (tens == 0 && j != 0)
{
_putchar(' ');
_putchar(' ');
}
else
{
_putchar(tens + '0');
}

_putchar(ones + '0');

if (j != 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
