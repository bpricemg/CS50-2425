/**
 * Print a right aligned triangle of blocks
 */
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt the user for the height (and width)
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while(height <= 0);

    // For each row
    for (int row = 0; row < height; row++)
    {
        // Print the spaces
        for (int spaces = 0; spaces < row; spaces++)
        {
            printf(" ");
        }

        // Print the blocks
        for (int col = 0; col < height - row; col++)
        {
            printf("#");
        }

        // Print a new line to prepare for the next row
        printf("\n");
    }

}
