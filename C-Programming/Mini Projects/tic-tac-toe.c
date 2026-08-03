#include <stdio.h>
#include <ctype.h>
int main()
{
    int checkWin(char board[3][3]);
    char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
    printf("===============TIC TAC TOE GAME===============\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %c ", board[i][j]);
        }
        printf("\n");
    }
    int count = 0;
    char current_player = 'X';
    while (1)
    {
        printf("Player %c's turn\n", current_player);

        int choice;
        printf("Choose a cell(1-9): ");
        scanf("%d", &choice);

        // switch(choice){
        //     case 1:
        //     board[0][0] = current_player;
        //     break;

        //     case 2:
        //     board[0][1] = current_player;
        //     break;

        //     case 3:
        //     board[0][2] = current_player;
        //     break;

        //     case 4:
        //     board[1][0] = current_player;
        //     break;

        //     case 5:
        //     board[1][1] = current_player;
        //     break;

        //     case 6:
        //     board[1][2] = current_player;
        //     break;

        //     case 7:
        //     board[2][0] = current_player;
        //     break;

        //     case 8:
        //     board[2][1] = current_player;
        //     break;

        //     case 9:
        //     board[2][2] = current_player;
        //     break;

        //     default:
        //     printf("Invalid choice!");
        // }

        if (choice < 1 || choice > 9)
        {
            printf("Invalid choice!\n");
            continue;
        }

        int row = (choice - 1) / 3;
        int col = (choice - 1) % 3;

        if (isdigit(board[row][col]))
        {
            board[row][col] = current_player;
        }
        else
        {
            printf("Cell already taken! Try again.\n");
            continue;
        }

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                printf(" %c ", board[i][j]);
            }
            printf("\n");
        }
        count++;

        if (checkWin(board) == 0 && count == 9)
        {
            printf("Oops Its a draw!");
            return 1;
        }

        if (checkWin(board) == 1)
        {
            printf("Player %c Won !!! Congrats ⭐⭐", current_player);
            return 1;
        }

        if (current_player == 'X')
        {
            current_player = 'O';
        }
        else
        {
            current_player = 'X';
        }
    }

    return 0;
}
int checkWin(char board[3][3])
{

    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && !isdigit(board[i][1]))
            return 1;
    }
    for (int j = 0; j < 3; j++)
    {
        if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && !isdigit(board[0][j]))
            return 1;
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
        return 1;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
        return 1;

    return 0;
}