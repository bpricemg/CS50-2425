/**
 * Get a float from the user
 */
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get the user's favorite number
    float number = get_float("What is your favorite number? ");

    // Confirm the user's choice, to one decimal point
    printf("You chose the number %0.1f.\n", number);
}
