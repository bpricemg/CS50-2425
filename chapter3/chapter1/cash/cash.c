/**
 * Determine the least number of coins needed to make change
 */

#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    // Get the change
    float dollars;
    do
    {
        dollars = get_float("Change owed: ");
    }
    while (dollars < 0);

    // Convert dollars to cents
    int cents = round(dollars * 100);

    // Determine the number of quarters
    int coins = cents / 25;

    // Determine the remaining amount after quarters
    cents %= 25;

    // Determine the number of dimes
    coins += cents / 10;

    // Determine the remaining amount after dimes
    cents %= 10;

    // Determine the number of nickles
    coins += cents / 5;

    // Determine the remaining amount after nickles
    cents %= 5;

    // The remainder is the number of pennies
    coins += cents;

    // Print the number of coins
    printf("%i\n", coins);

}
