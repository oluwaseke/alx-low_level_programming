#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
int i, n = 50, t1 = 0, t2 = 1, nextTerm;

for (i = 1; i <= n; ++i)
{
printf("%d", t1);
if (i != n)
printf(", ");

nextTerm = t1 + t2;
t1 = t2;
t2 = nextTerm;
}
printf("\n");

return (0);
}
