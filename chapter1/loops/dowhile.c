/**
 * Get a positive integer
 */

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Declare a variable n
    int n;
    do
    {
        n = get_int("Positive integer: ");
    }
    // Continue to prompt the user while the number is not positive
    while(n <= 0);

    printf("You chose the positive integer %i.\n", n);
}
