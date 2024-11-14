/**
 * Linear search for a a phone number
 */

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // An array of names
    string names[] = {"Marshall", "Oliver", "Mia", "Caelan", "Sepp", "Christina"};

    // An array of phone numbers
    string numbers[] = {"555-555-5555", "413-458-9582", "800-111-2222",
                        "888-888-8888", "000-012-3456", "413-888-0000"};

    // Search for Mia
    for (int i = 0; i < 6; i++)
    {
        if (strcmp(names[i], "Mia") == 0)
        {
            printf("Number: %s\n", numbers[i]);
            return 0;
        }
    }

    printf("Not found\n");
    return 1;
}
