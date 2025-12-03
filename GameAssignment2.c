#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
void playGame()
{
    srand(time(0));
    int x=1;
    int step=0;
    int obstaclePos=rand()%3;
    int score=0;
    int speed=150;
    while (1)
    {
        if (_kbhit())
        {
            char ch=getch();
            if (ch==75 && x>0)
            {                
                x--;
            }
            else if (ch==77 && x<2)
            {
                x++;
            }
        }
        system("cls");
        printf("|--- --- ---|\n");
        for (int i=0;i<10;i++)
        {
            if (i==step)
            {
                if (obstaclePos==0)
                {
                    printf("| %c         |\n", 1);
                }
                else if (obstaclePos == 1)
                {
                    printf("|     %c     |\n", 1);
                }
                else
                {
                    printf("|        %c  |\n", 1);
                }
            }
            else
            {
                printf("|           |\n");
            }
        }
        if (x==0)
        {
            printf("| %c         |\n", 6);
        }
        else if (x==1)
        {
            printf("|     %c     |\n", 6);
        }
        else
        {
            printf("|        %c  |\n", 6);
        }
        if (step==10 && x==obstaclePos)
        {
            printf("\nGAME OVER!\n");
            printf("Your Score: %d\n",score);
            break;
        }
        Sleep(speed);
        step++;
        if (step>10)
        {
            step=0;
            obstaclePos=rand()%3;
            score++;
            if (score%5==0 && speed>40)
            {
                speed-=10;
            }
        }
    }
}
int main()
{
    char choice;
    while (1)
    {
        system("cls");
        printf("\n==== SIMPLE LANE GAME ====\n");
        printf("Controls: Left Arrow ← , Right Arrow →\n");
        printf("Press any key to start...\n");
        getch();
        playGame();
        printf("\nDo you want to play again? (y/n): ");
        scanf("%c",&choice);
        if (choice=='n'||choice=='N')
        {
            printf("\nThanks for playing!\n");
            break;
        }
    }
    return 0;
}