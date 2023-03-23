#include "main.h"
/**
 * print_fibonacci_numbers - Prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 */
void print_fibonacci_numbers(void)
{
int i;
unsigned long long int fib[50] = {1, 2};

for (i = 2; i < 50; i++)
{
fib[i] = fib[i - 1] + fib[i - 2];
}

for (i = 0; i < 49; i++)
{
printf("%llu, ", fib[i]);
}

printf("%llu\n", fib[49]);
}
