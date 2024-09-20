/**
 * Greets a user by their name
 */
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Asks the user for their name
    string answer = get_string("What's your name? ");

    // Says hello to the user
    printf("hello, %s\n", answer);
}
