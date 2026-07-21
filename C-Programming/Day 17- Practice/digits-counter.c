#include <stdio.h>
int main()
{
    int num;
    int digits = 0;
    int armstrong = 0;
    printf("Enter a number here: ");
    scanf("%d", &num);

    int original = num;

    while (num != 0)
    {
        int last_digit = num % 10;
        num = num / 10;
        digits += 1;
    }

    printf("number of digits = %d ", digits);
    return 0;
}