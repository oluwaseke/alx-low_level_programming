#include "main.h"
#include <stdio.h>

/**
 * print_fibonacci - prints the first 50 numbers in the Fibonacci sequence,
 * starting with 1 and 2, followed by a new line.
 */
int main(void)
{
    int i;
    long int n1 = 1, n2 = 2, next;

    printf("%ld, %ld", n1, n2);

    for (i = 3; i <= 50; i++)
    {
        next = n1 + n2;
        printf(", %ld", next);
        n1 = n2;
        n2 = next;
    }
    printf("\n");
    return (0);
}
