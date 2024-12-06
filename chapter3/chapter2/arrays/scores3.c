/**
 * Average three numbers using an array
 */

#include <cs50.h>
#include <stdio.h>

// Function prototype
float array_average(int length, int array[]);

int main(void)
{
    // Let the use decided how many scores to enter
    int n = get_int("How many scores do you want to enter? ");

    // Scores
    int scores[n];
    for (int i = 0; i < n; i++)
    {
        scores[i] = get_int("Scores: ");
    }

    // Print the average
    printf("Average: %0.2f%%\n", array_average(n, scores));
}

float array_average(int length, int array[])
{
    // Add elements together
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }

    // Divide by the number of elements (we needed to typecast to avoid int division)
    int average = sum / (float) length;


    // Return the average
    return average;
}
