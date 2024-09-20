/**
 * Get an integer from the user
 */
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get the user's favorite number
    long long int number = get_long_long("What is your favorite number? ");

    // Confirm the user's choice
    printf("You chose the number %lli.\n", number);
}
