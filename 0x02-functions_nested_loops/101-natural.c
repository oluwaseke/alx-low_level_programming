#include "main.h"
#include <stdio.h>
/**
 * sum_multiples - Computes and prints the sum of all the multiples of 3 or 5 below 1024 (excluded).
 *
 * Return: Nothing.
 */
void sum_multiples(void)
{
int i, sum = 0;

for (i = 0; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
sum += i;
}

printf("%d\n", sum);
}
