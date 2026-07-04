#include <stdio.h>
int main()
{
    int a = 10, b = 5, choice;
    printf("1.Add\n 2.Subtract\n 3.Multiply\n 4.Divide\n");
    printf("Enter you choice (1-4): ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Result: %d", a + b);
        break;
    case 2:
        printf("Result: %d", a - b);
        break;
    case 3:
        printf("Result: %d", a * b);
        break;
    case 4:
        printf("Result: %d", a / b);
        break;
    default:
        printf("Invalid Choice!");
    }
    return 0;
}