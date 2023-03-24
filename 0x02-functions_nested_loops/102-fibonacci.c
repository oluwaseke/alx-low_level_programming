#include "main.h"
#include <stdio.h>

/**
 * print_fibonacci - Prints the first 50 Fibonacci numbers
 */
void print_fibonacci(void)
{
int i;
unsigned long int n1 = 1, n2 = 2, next;

for (i = 0; i < 50; i++)
{
printf("%lu", n1);

if (i != 49)
printf(", ");

next = n1 + n2;
n1 = n2;
n2 = next;
}

printf("\n");
}
