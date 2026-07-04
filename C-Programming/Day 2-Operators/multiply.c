#include <stdio.h>
int main(){
    int num1 , num2 , multiply;
    printf("Enter a number: ");
    scanf("%d", &num1);

    printf("Enter another number: ");
    scanf("%d", &num2);

    multiply = num1*num2;
    printf("Multiplication of above two numbers is: %d\n", multiply);
    return 0 ;
}