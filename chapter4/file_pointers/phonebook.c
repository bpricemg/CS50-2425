#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Open CSV (comma separated values) file
    FILE *fonebook = fopen("phonebook.csv", "a");
    if (!fonebook)
    {
        return 1;
    }

    // Get name and number
    char *name = get_string("Name: ");
    char *number = get_string("Number: ");

    // Print to file
    fprintf(fonebook, "%s,%s\n", name, number);

    // Close file
    fclose(fonebook);

}
