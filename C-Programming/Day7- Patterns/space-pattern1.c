#include <stdio.h>
int main()
{
    int i, j, space;
    for (i = 1; i <= 5; i++)
    {
        for (space = 5 - i; space > 0; space--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}