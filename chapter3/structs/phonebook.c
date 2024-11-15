/**
 * Linear search for a a phone number
 */

#include <cs50.h>
#include <stdio.h>
#include <strings.h>

typedef struct
{
    string name;
    string number;
}
person;

int main(void)
{
    // Array of people (each have a name and number)
    person people[6];

    // Fill the array in
    people[0].name = "Marshall";
    people[0].number = "555-555-5555";

    people[1].name = "Oliver";
    people[1].number = "413-458-9582";

    people[2].name = "Mia";
    people[2].number = "800-111-2222";

    people[3].name = "Caelan";
    people[3].number = "888-888-8888";

    people[4].name = "Sepp";
    people[4].number = "000-012-3456";

    people[5].name = "Christina";
    people[5].number = "413-888-0000";

    // Ask the user who to search for
    string name = get_string("Name: ");

    // Search for name
    for (int i = 0; i < 6; i++)
    {
        if (strcasecmp(people[i].name, name) == 0)
        {
            printf("Number: %s\n", people[i].number);
            return 0;
        }
    }

    printf("Not found\n");
    return 1;
}
