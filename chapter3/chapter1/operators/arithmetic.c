/**
 * Test out some integer arithmetic
 */

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt the user for an integer and save it
    int number1 = get_int("Integer, please: ");

    // Prompt the user for another integer and save it
    int number2 = get_int("Another integer, please: ");

    // Addition with an extra variable
    //int sum = number1 + number2;
    //printf("%i plus %i is %i.\n", number1, number2, sum);

    // Print out the result
    printf("%i plus %i is %i.\n", number1, number2, number1 + number2);
    printf("%i minus %i is %i.\n", number1, number2, number1 - number2);
    printf("%i times %i is %i.\n", number1, number2, number1 * number2);

    // Note* an int divided by an int is always an int
    // Floor division
    printf("%i divided by %i is %i.\n", number1, number2, number1 / number2);

    printf("The remainder when %i is divided by %i is %i.\n", number1, number2, number1 % number2);
}
