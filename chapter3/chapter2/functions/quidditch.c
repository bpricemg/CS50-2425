#include <cs50.h>
#include <stdio.h>

// function prototype
int final_score(int goal_num, bool snitch_caught);

int main(void)
{
    int goal_num = get_int("Number of times your chasers got the quaffle through a hoop: ");
    bool snitch_caught = get_int("Did your team's seeker catch the snitch? Enter 1 if true, 0 otherwise: ");
    int score = final_score(goal_num, snitch_caught);
    printf("Your team's final score is: %d\n", score);
}

// function definition - caclulates the final score
int final_score(int goal_num, bool snitch_caught)
{
    int score = 10 * goal_num;

    if (snitch_caught)
    {
        score += 150;
    }

    return score;
}
