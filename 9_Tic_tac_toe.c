#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <time.h>

char tic[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
char sign, place, name1[10], name2[10];
int draw = 0, number;

int check()
{
    int end = 1;
    if ((tic[0] == 'x' && tic[1] == 'x' && tic[2] == 'x') || (tic[0] == 'o' && tic[1] == 'o' && tic[2] == 'o'))
    {
        if (sign == 'x')
        {
            printf("\n\n********************************Congrats!!********************************\n\n");
            printf("player %s win this game.\n", name1);
        }
        else
        {
            printf("\n\n********************************Congrats!!********************************\n\n");
            printf("palyer %s win this game.\n", name2);
        }
        return (end);
    }
    else if ((tic[3] == 'x' && tic[4] == 'x' && tic[5] == 'x') || (tic[3] == 'o' && tic[4] == 'o' && tic[5] == 'o'))
    {
        if (sign == 'x')
        {
            printf("\n\n********************************Congrats!!********************************\n\n");
            printf("player %s win this game.\n", name1);
        }
        else
        {
            printf("\n\n********************************Congrats!!********************************\n\n");
            printf("player %s win this game.\n", name2);
        }
        return (end);
    }
    else if ((tic[6] == 'x' && tic[7] == 'x' && tic[8] == 'x') || (tic[6] == 'o' && tic[7] == 'o' && tic[8] == 'o'))
    {
        if (sign == 'x')
        {
            printf("\n\n********************************Congrats!!********************************\n\n");
            printf("player %s win this game.\n", name1);
        }
        else
        {
            printf("\n\n********************************Congrats!!********************************\n\n");
            printf("player %s win this game.\n", name2);
        }
        return (end);
    }
    else if ((tic[0] == 'x' && tic[4] == 'x' && tic[8] == 'x') || (tic[0] == 'o' && tic[4] == 'o' && tic[8] == 'o'))
    {
        if (sign == 'x')
        {
            printf("\n\n********************************Congrats!!********************************\n\n");
            printf("player %s win this game.\n", name1);
        }
        else
        {
            printf("\n\n********************************Congrats!!********************************\n\n");
            printf("player %s win this game.\n", name2);
        }
        return (end);
    }
    else if ((tic[2] == 'x' && tic[4] == 'x' && tic[6] == 'x') || (tic[2] == 'o' && tic[4] == 'o' && tic[6] == 'o'))
    {
        if (sign == 'x')
        {
            printf("\n\n********************************Congrats!!********************************\n\n");
            printf("player %s win this game.\n", name1);
        }
        else
        {
            printf("\n\n********************************Congrats!!********************************\n\n");
            printf("player %s win this game.\n", name2);
        }
        return (end);
    }
    else if ((tic[0] == 'x' && tic[3] == 'x' && tic[6] == 'x') || (tic[0] == 'o' && tic[3] == 'o' && tic[6] == 'o'))
    {
        if (sign == 'x')
        {
            printf("\n\n********************************Congrats!!********************************\n\n");
            printf("player %s win this game.\n", name1);
        }
        else
        {
            printf("\n\n********************************Congrats!!********************************\n\n");
            printf("player %s win this game.\n", name2);
        }
        return (end);
    }
    else if ((tic[1] == 'x' && tic[4] == 'x' && tic[7] == 'x') || (tic[1] == 'o' && tic[4] == 'o' && tic[7] == 'o'))
    {
        if (sign == 'x')
        {
            printf("\n\n********************************Congrats!!********************************\n\n");
            printf("player %s win this game.\n", name1);
        }
        else
        {
            printf("\n\n********************************Congrats!!********************************\n\n");
            printf("player %s win this game.\n", name2);
        }
        return (end);
    }

    else if ((tic[2] == 'x' && tic[5] == 'x' && tic[8] == 'x') || (tic[2] == 'o' && tic[5] == 'o' && tic[8] == 'o'))
    {
        if (sign == 'x')
        {
            printf("\n\n********************************Congrats!!********************************\n\n");
            printf("player %s win this game.\n", name1);
        }
        else
        {
            printf("\n\n********************************Congrats!!********************************\n\n");
            printf("player %s win this game.\n", name2);
        }
        return (end);
    }
    else
    {
        draw++;
        if (draw == 9)
        {
            printf("\n\n+++++++++++++++++++++++++Match is draw++++++++++++++++++++++++\n\n");
            printf("Try again.\n");
            return (end);
        }
        else
        {
            end = 0;
            return (end);
        }
    }
}
void replace()
{
    char temp;
    for (int i = 0; i < 9; i++)
    {
        if (place == tic[i])
        {
            temp = tic[i];
            tic[i] = sign;
            break;
        }
    }
}
void view()
{
    printf("\n **********Welcome to the Game**********\n");
    printf("       ----->  Tic-Tac-Toe  <-----\n");
    printf("                                   |~~~~|~~~~|~~~~|\n");
    printf("                                   |  %c |  %c |  %c |\n", tic[0], tic[1], tic[2]);
    printf("                                   |~~~~|~~~~|~~~~|\n");
    printf("                                   |  %c |  %c |  %c |\n", tic[3], tic[4], tic[5]);
    printf("                                   |~~~~|~~~~|~~~~|\n");
    printf("                                   |  %c | %c  |  %c |\n", tic[6], tic[7], tic[8]);
    printf("                                   |~~~~|~~~~|~~~~|\n");
}
void reinitial()
{
    tic[0] = '1';
    tic[1] = '2';
    tic[2] = '3';
    tic[3] = '4';
    tic[4] = '5';
    tic[5] = '6';
    tic[6] = '7';
    tic[7] = '8';
    tic[8] = '9';
}

int main()
{
    int end = 0;
    char startAgain;
    int turn;

    printf("*************************************************************************************************************************\n");
    printf("*************************************************************************************************************************\n");
    printf("**                                                                                                                     **\n");
    printf("**  ########## ##########  ##########     ##########       ###       ##########     ########## ########## ##########   **\n");
    printf("**      ##         ##      ##                 ##          ## ##      ##                 ##     ##      ## ##           **\n");
    printf("**      ##         ##      ##                 ##         ##   ##     ##                 ##     ##      ## ##           **\n");
    printf("**      ##         ##      ##        ###      ##        #########    ##         ###     ##     ##      ## ##########   **\n");
    printf("**      ##         ##      ##                 ##       ##       ##   ##                 ##     ##      ## ##           **\n");
    printf("**      ##         ##      ##                 ##      ##         ##  ##                 ##     ##      ## ##           **\n");
    printf("**      ##     ##########  ##########         ##     ##           ## ##########         ##     ########## ##########   **\n");
    printf("**                                                                                                                     **\n");
    printf("*************************************************************************************************************************\n");
    printf("*************************************************************************************************************************\n");

    printf("Enter player 1 name-->");
    gets(name1);
    printf("Enter player 2 name-->");
    gets(name2);
    for (int i = 0; i < 9; i++)
    {
        view();
        if (end == 1)
        {
        Again:
            printf("Do you want to play agian");
            fflush(stdin);
            printf("press 'y' for yes and 'n' for no\n");
            scanf("%c", &startAgain);
            if (startAgain == 'n' || startAgain == 'N')
            {
                printf("Thank you for playing game\n");
                exit(0);
            }
            else if (startAgain == 'y' || startAgain == 'Y')
            {
                reinitial();
                i = 0;
            }
            else
            {
                printf("ERROR!!!,you press invalid character\n");
                printf("Try again\n");
                goto Again;
            }
        }
        if (i == 0)
        {
            printf("Which player start the game -player 1/Player 2--->");
            scanf("%d", &turn);
            if (turn == 1)
            {
            repeat1:
                printf("player 1 your symbol is ::--> X\n");
                fflush(stdin);
                printf("Chose your place: ");
                scanf("%c", &place);
                fflush(stdin);
                printf("Enter your sign-> ");
                scanf("%c", &sign);
                if (sign != 'x')
                {
                    printf("You enter wrong sign\n");
                    printf("Your sign is X\n");
                    goto repeat1;
                }
            }
            else if (turn == 2)
            {
            repeat2:
                printf("player 2 your symbol is ::--> o\n");
                fflush(stdin);
                printf("Chose your place: ");
                scanf("%c", &place);
                fflush(stdin);
                printf("Enter your sign-> ");
                scanf("%c", &sign);
                if (sign != 'o')
                {
                    printf("You enter wrong sign\n");
                    printf("Your sign is o\n");
                    goto repeat2;
                }
            }
            else
            {
                printf("You enter wrong player number\n");
                printf("Start your game again\n");
                exit(0);
            }
        }
        else if (i >= 1)
        {
            if (turn == 1)
            {
            repeate4:
                printf("player 2 your symbol is ::--> o\n");
                fflush(stdin);
                printf("Chose your place: ");
                scanf("%c", &place);
                fflush(stdin);
                printf("Enter your sign-> ");
                scanf("%c", &sign);
                if (sign != 'o')
                {
                    printf("You enter wrong sign\n");
                    printf("Your sign is o\n");
                    goto repeate4;
                }
                replace();
                end = check();
                view();

            repeate3:
                printf("palyer 1 your symbol is ::--> X\n");
                fflush(stdin);
                printf("Chose your place: ");
                scanf("%c", &place);
                fflush(stdin);
                printf("Enter your sign-> ");
                scanf("%c", &sign);
                if (sign != 'x')
                {
                    printf("You enter wrong sign\n");
                    printf("Your sign is X\n");
                    goto repeate3;
                }
            }
            else if (turn == 2)
            {
            repeate5:
                printf("player 1 your symbol is ::--> x\n");
                fflush(stdin);
                printf("Chose your place: ");
                scanf("%c", &place);
                fflush(stdin);
                printf("Enter your sign-> ");
                scanf("%c", &sign);
                if (sign != 'x')
                {
                    printf("You enter wrong sign\n");
                    printf("Your sign is x\n");
                    goto repeate5;
                }
                replace();
                end = check();
                view();

            repeate6:
                printf("palyer 2 your symbol is ::--> o\n");
                fflush(stdin);
                printf("Chose your place: ");
                scanf("%c", &place);
                fflush(stdin);
                printf("Enter your sign-> ");
                scanf("%c", &sign);
                if (sign != 'o')
                {
                    printf("You enter wrong sign\n");
                    printf("Your sign is o\n");
                    goto repeate6;
                }
            }
        }
        replace();
        end = check();
    }
    return 0;
}