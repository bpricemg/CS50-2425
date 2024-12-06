/**
 * The length of a person's first name
 */

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get user's name
    string name = get_string("Full name: ");

    // Initalize a counter
    int letters = 0;

    // Increase the counter until we see the first space
    while(name[letters] != ' ')
    {
        letters++;
    }

    // Print the length
    printf("The length of first name: %i\n", letters);
}
