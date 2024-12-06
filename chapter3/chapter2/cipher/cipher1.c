/**
 * Cipher a message with 5 characters as key
 */

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    string message = "Voila!";

    // Cipher the message
    printf("Ciphered message: ");

    // For each character
    for (int i = 0; i < strlen(message); i++)
    {
        // If is upper
            // Go 5 ASCII characters with "wrapping" (only works for upper case letters)
            printf("%c", (message[i] + 5 - 'A') % 26 + 'A');
        // else if is lower
            //
        // else must be a special character
            // just print (or do nothing)



    }

    printf("\n");

    return 0;
}
