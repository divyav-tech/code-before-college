#include <stdio.h>
int main()
{
    int grade;
    printf("Choose a grade: \n");
    printf("Grade A = 1\n Grade B = 2\n Grade C = 3\n Grade D = 4\n Grade F = 5\n");
    printf("Enter a number (1-5) corresponding to your grade: ");
    scanf("%d", &grade);

    switch (grade)
    {
    case 1:
        printf("Grade A Excellent!");
        break;
    case 2:
        printf("Grade B Very Good!");
        break;
    case 3:
        printf("Grade C Good!");
        break;
    case 4:
        printf("Grade D Average");
        break;
    case 5:
        printf("Grade F Fail");
        break;
    default:
        printf("Please enter a valid number from 1 to 5");
    };
    return 0;
}