#include <stdio.h>

int main(void)
{
    int words = 6;
    int letters = 25;

    // Average number of letters per 100 words
    float L1 = letters / words * 100;
    printf("L1: %f\n", L1);

    float L2 = 100.0 * letters / words;
    printf("L2: %f\n", L2);

    // Typecasting
    float L3 = (float) letters / words * 100;
    printf("L3: %f\n", L3);


}
