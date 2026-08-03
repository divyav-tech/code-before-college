#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    printf("================ ROCKS PAPER SCISSORS =================\n");
    int score_user = 0;
    int score_computer = 0;
    srand(time(NULL));
    while (1)
    {
        printf("\n=========MENU==========\n");
        printf("1. Play\n2. Check Score\n3. Exit\n");
        int choice;
        printf("Enter your choice: ");
        scanf("%d" , &choice);
        printf("Choose one:\n");

        switch (choice)
        {
        case 1:
        {
            int user;
            printf("1. Rock\n2. Paper\n3. Scissors\n");
            printf("Enter your choice: ");
            scanf("%d", &user);

            if (user < 1 || user > 3)
            {
                printf("Invalid choice!\n");
                continue;
            }
            int computer;
            computer = rand() % 3 + 1;

            if (computer == 1)
            {
                printf("Computer chooses Rock\n");
            }
            else if (computer == 2)
            {
                printf("Computer chooses Paper\n");
            }
            else
            {
                printf("Computer chooses Scissors\n");
            }

            if (computer == 1 && user == 3 || computer == 2 && user == 1 || computer == 3 && user == 2)
            {
                printf("Computer wins!!\n");
                score_computer++;
            }
            else if(computer == 3 && user == 1 || computer == 1 && user == 2 || computer == 2 && user == 3)
            {
                printf("You win !!!!\n");
                score_user++;
            }
            else
            {
                printf("Its a draw!!\n");
            }
        }
        break;


        case 2:
        {
            printf("========= CURRENT SCORE =========\n");
            printf("Computer      :%d\n" , score_computer);
            printf("You           :%d\n" , score_user);
            printf("==================================\n");
        }
        break;

        case 3:
        {
            printf("Exiting ............\n");
            return 1;
        }
        break;

        default:
            printf("Invalid choice!!!");
        }
    }
    return 0;
}