#include <stdio.h>
int main()
{
    int a, b, choice;
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("\n Choose an Operation:\n");
    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Result: %d + %d = %d\n", a, b, a + b);
        break;
    case 2:
        printf("Result: %d - %d = %d\n", a, b, a - b);
        break;
    case 3:
        printf("Result: %d * %d = %d\n", a, b, a * b);
        break;
    case 4:
        if (b != 0)
        {
            printf("Result: %d / %d = %d\n", a, b, a / b);
        }
        else
        {
            printf("Error: Division by zero is not allowed.\n");
        };
        break;
    default:
        printf("Invalid choice! Please enter a number between 1 and 4\n");
    }
    return 0;
}