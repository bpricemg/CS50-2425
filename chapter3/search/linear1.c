/**
 * Linear search for an element in an array
 */

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // An array of names
    string names[] = {"Marshall", "Oliver", "Mia", "Caelan", "Sepp", "Christina"};

    // Search for Mia
    for (int i = 0; i < 6; i++)
    {
        if (strcmp(names[i], "Mia") == 0)
        {
            printf("Found at index %i\n", i);
            return 0;
        }
    }

    printf("Not found\n");
    return 1;
}
