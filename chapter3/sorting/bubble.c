// Bubble Sort
#include <cs50.h>
#include <stdio.h>

int main (void)
{
    // Get positive array size from user
    int n;
    do
    {
        n = get_int("Please enter array size: ");
    }
    while (n < 1);

    // Populate array with integers from user
    int array[n];
    printf("Please enter %i elements to fill array: \n", n);
    for (int i = 0; i < n; i++)
    {
        array[i] = get_int("");
    }

    // Display unsorted array
    printf("unsorted array is: \n");
    for(int i = 0; i < n; i++)
    {
        printf("%i ", array[i]);
    }
    printf("\n");

    // Bubble Sort
    // set swap counter to a non-zero value
    int swaps = -1;

    // repeat until the swap counter is 0
    while (swaps != 0)
    {
        // reset swap counter to 0
        swaps = 0;

        for (int i = 0; i < n; i++)
        {
            // look at each adjacent pair
            // if two adjacent elements are not in order
            if (array[i] > array[i + 1])
            {
                // swap them and add one the swap counter
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;

                swaps++;
            }
        }
    }


    // Display sorted array
    printf("sorted array is: \n");
    for(int i = 0; i < n; i++)
    {
        printf("%i ", array[i]);
    }
    printf("\n");

    return 0;
}
