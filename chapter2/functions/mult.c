/**
 * Test a function that multiplies two floats
 */

#include <cs50.h>
#include <stdio.h>

// Funtion prototype
float product(float x, float y);

int main(void)
{
    // Get a number from the user
    float first = get_float("Number: ");

    // Get another float
    float second = get_float("Another number: ");

    // Multiply (function call)
    float mult = product(first, second);

    // Print the result
    printf("The product of %0.2f and %0.2f is %0.2f.\n", first, second, mult);
}

// Function definition
float product(float x, float y)
{
    return x * y;
}
