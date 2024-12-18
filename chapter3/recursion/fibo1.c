/**
 * Recursive implemenation that lists the first 25 Fibonacci numbers
 */
#include <cs50.h>
#include <stdio.h>

#define N 25

// Function prototype
int fibo(int n);

int main(void)
{
    // Print the first first 25 Fibonacci numbers
    printf("The first %i numbers in the Fibonacci sequence are: \n", N);
    for (int i = 0; i < N; i++)
    {
        printf("%i\t", fibo(i));
    }
}

/**
 * Return the nth Fibonacci number
 */
int fibo(int n)
{
    // Base case
    if (n <= 1)
        return n;

    // Recursive case
    return fibo(n - 1) + fibo(n - 2);
}
