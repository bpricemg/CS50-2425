/**
 * Print the user's initials
 */

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Get user's name
    string name = get_string("Full name: ");

    // Print the first initial
    printf("Initials: %c", toupper(name[0]));

    // To print more initials, find a space and
    // print the next character
    for (int i = 1; i < strlen(name); i++)
    {
        if (name[i] == ' ' || name[i] == '-')
        {
            printf("%c", toupper(name[i + 1]));
        }
    }

    // New line
    printf("\n");
}
