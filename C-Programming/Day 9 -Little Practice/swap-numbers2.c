#include <stdio.h>
int main()
{
    // Swapping  numbers without a third variable
    int a = 5;
    int b = 2;

    printf("Initially a = %d and b = %d \n", a, b);
    printf("I am trying to swap values without any third variable\n");

    a = a + b;
    b = a - b;
    a = a - b;

    printf("a = %d \nb = %d\n", a, b);
    return 0;
}