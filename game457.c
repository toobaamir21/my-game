#include <stdio.h>

int main()
{
    char input1[10];

    char left[5] = {'l', 'e', 'f', 't', '\0'};
    char silver[7] = {'s', 'i', 'l', 'v', 'e', 'r', '\0'};
    int lives = 1;
    char for_life[4];
    char y[4] = {'y', 'e', 's', '\0'};
    char white[6] = {'w', 'h', 'i', 't', 'e', '\0'};
    int points = 0;
    char d[7] = {'d', 'a', 'g', 'g', 'e', 'r', '\0'};
    char k[6] = {'k', 'n', 'i', 'f', 'e', '\0'};
    char q[5] = {'q', 'u', 'i', 't', '\0'};
    char g[4] = {'g', 'u', 'n', '\0'};
    int i;
    char input[7];

    printf("The boy is lost in a Jungle. He has to get out of there but he has no clue which way to go.\nAs soon as he starts walking weird situations arise and he only has one life.\n\n");
revive:
    printf("WEIRD SITUATION NO 01\n There are two routes infront of you with a riddle.\n Only after solving the riddle you'll know which route to choose or else you'll face DEATH!\n\n");
    printf("RIDDLE:\n BEING WRONG IS NOT EQUISITE\n WHATEVER THE ANSWER IS\n IT'S ACTUALLY THE OPPOSITE.\n\n");
    printf("Which route is it? Enter Right or Left:\n");
    gets(input);
    if (input[1] == left[1] && input[2] == left[2] && input[3] == left[3] && input[4] == left[4])
    {
        printf("\nCorrect\n");
        printf("Your reward is you get a new riddle to solve the next weird situation plus 1 extra life.\n");
        lives += 1;
        printf("Now you have %d lives\n\n", lives);
    }

    else
    {
        printf("Wrong route. YOU ARE DEAD!\n");
        printf("Do you want to use your life: Yes/No\n");

        gets(for_life);
        if (for_life[1] == y[1] && for_life[2] == y[2] && for_life[3] == y[3])
        {
            lives -= 1;
            if (lives >= 0)
            {
                printf("\nRemaining lives %d\n\n", lives);

                goto revive;
            }
            else if (lives < 0)
            {
                printf("\nNo lives left to continue\n\n");
                goto end;
            }
        }

        else
        {
            goto end;
        }
    }

revive_back:
    printf("WEIRD SITUATION NO 02\n There are two fires infront of you with a riddle.\n Only after solving the riddle you'll know which fire is fake or else you'll burn alive!\n\n");
    printf("RIDDLE:\n THESE FIRES GLOWED\n WALK ON THE SAFE SIDE OF THE ROAD\n\n");
    printf("Which fire is it? Enter Right or Left:\n");
    gets(input);
    if (input[1] == left[1] && input[2] == left[2] && input[3] == left[3] && input[4] == left[4])
    {
        printf("That's a fake fire you can pass through it.\n");
        printf("Your reward is you get a new riddle to solve the next weird situation plus 1 extra life.\n");
        lives += 1;
        printf("Now you have %d lives\n\n", lives);
    }

    else
    {
        printf("REAL FIRE! YOU ARE BURNED ALIVE!\n");

        printf("Do you want to use your life: Yes/No\n");

        gets(for_life);
        if (for_life[1] == y[1] && for_life[2] == y[2] && for_life[3] == y[3])
        {
            lives -= 1;
            if (lives >= 0)
            {
                printf("\nRemaining lives %d\n\n", lives);

                goto revive_back;
            }
            else if (lives < 0)
            {
                printf("\nNo lives left to continue\n\n");
                goto end;
            }
        }

        else
        {
            goto end;
        }
    }
revive_again:
    printf("WEIRD SITUATION NO 03\n There are two keys silver and golden infront of you with a riddle.\n Only after solving the riddle you'll be able open the exit door!\n\n");
    printf("RIDDLE:\n PHARSES DOESN'T MEAN ANYTHING ANYMORE\n "
           "A GOLDEN KEY CAN OPEN ANY DOOR"
           "\n\n");
    printf("Which key is it? Enter golden or silver:\n");
    gets(input);
    if (input[1] == silver[1] && input[2] == silver[2] && input[3] == silver[3] && input[4] == silver[4] && input[5] == silver[5] && input[6] == silver[6])
    {
        printf("That's a right key.\n");
        printf("Your reward is you get a new riddle to solve the next weird situation plus 1 extra life.\n");
        lives += 1;
        printf("Now you have %d lives\n\n", lives);
    }

    else
    {
        printf("WRONG KEY!\n");
        printf("Do you want to use your life: Yes/No\n");

        gets(for_life);
        if (for_life[1] == y[1] && for_life[2] == y[2] && for_life[3] == y[3])
        {
            lives -= 1;
            if (lives >= 0)
            {
                printf("\nRemaining lives %d\n\n", lives);
                goto revive_again;
            }
            else if (lives < 0)
            {
                printf("\nNo lives left to continue\n\n");
                goto end;
            }
        }

        else
        {
            goto end;
        }
    }
revive2:
    printf("LAST SITUATION\n Two doors: Black and White, there is a panther in the wrong door\n\n");
    printf("RIDDLE:\n You are in Jungle\n With horrors not to mingle\n As black as tar\n You'll have scar\n\n");
    printf("Which door is it? Enter white or black:\n");
    gets(input);
    if (input[1] == white[1] && input[2] == white[2] && input[3] == white[3] && input[4] == white[4] && input[5] == white[5])
    {

        printf("CONGRATULATIONS! You are out of the Jungle\n");
        printf("Your reward is you get 500 points\n\n");
        points += 500;
        printf("Weapons column is unlocked. You can buy weapons now.\n\n");

        printf(" Dagger of 50 points\n Knife of 20 points\n Gun of 150 points\n To quit enter quit\n");
        while (points > 0)
        {
            printf("Enter your choice\n");
            gets(input1);
            if (input1[1] == d[1] && input1[2] == d[2] && input1[3] == d[3] && input1[4] == d[4] && input1[5] == d[5] && input1[6] == d[6] && points >= 50)
            {
                printf("You got dagger\n");
                points -= 50;
                printf("Remaining points are %d\n", points);
            }
            else if (input1[1] == k[1] && input1[2] == k[2] && input1[3] == k[3] && input1[4] == k[4] && input1[5] == k[5] && points >= 20)
            {
                printf("You got knife\n");
                points -= 20;
                printf("Remaining points are %d\n", points);
            }
            else if (input1[1] == g[1] && input1[2] == g[2] && input1[3] == g[3] && points >= 450)
            {
                printf("You got gun\n");
                points -= 450;
                printf("Remaining points are %d\n", points);
            }

            else if (input1[1] == q[1] && input1[2] == q[2] && input1[3] == q[3] && input1[4] == q[4])
            {
                break;
            }
            else
            {
                if (points < 50 && input1[1] == d[1] && input1[2] == d[2] && input1[3] == d[3] && input1[4] == d[4] && input1[5] == d[5] && input1[6] == d[6])
                {
                    printf("You don't have enough points to buy dagger\n");
                }
                else if (points < 450 && input1[1] == g[1] && input1[2] == g[2] && input1[3] == g[3])
                {
                    printf("You don't have enough points to buy gun\n");
                }
                else if (points < 20 && input1[1] == k[1] && input1[2] == k[2] && input1[3] == k[3] && input1[4] == k[4] && input1[5] == k[5])
                {
                    printf("You don't have enough points to buy knife\n");
                }

                else
                {
                    printf("Doesn't have that\n");
                }
            }
        }
    }

    else
    {
        printf("WRONG DOOR! PANTHER IS YOUR FATE.\n");
        printf("Do you want to use your life: Yes/No\n");

        gets(for_life);
        if (for_life[1] == y[1] && for_life[2] == y[2] && for_life[3] == y[3])
        {
            lives -= 1;
            if (lives >= 0)
            {
                printf("\nRemaining lives %d\n\n", lives);
                goto revive2;
            }
            else if (lives < 0)
            {
                printf("Sorry! No lives left to continue\n\n");
                goto end;
            }
        }
        else
        {
            goto end;
        }
    }
end:

    return 0;
}