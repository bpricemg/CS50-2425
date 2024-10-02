/**
 * While loop vs for loop
 */

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    /**
    // Use a while loop to say "hello, world" 5 times
    int counter = 0;
    while (counter < 5)
    {
        printf("hello, world\n");

        // Increase the counter by 1
        // counter = counter + 1;
        // counter += 1;
        counter++;
    }
    */

   // Use a for loop instead, wich is generally better
   for (int counter = 0; counter < 5; counter++)
   {
        printf("hello, world\n");
   }
}
