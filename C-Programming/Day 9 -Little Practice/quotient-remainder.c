#include <stdio.h>
int main(){
    // Find Quotient and remainder on division
    int num1 , num2 , quotient , remainder;
    printf("Enter first number:");
    scanf("%d" , &num1);
    printf("Enter second number:");
    scanf("%d" , &num2);
    if(num2 !=0){
        remainder = num1 % num2;
        quotient =( num1 - remainder )/num2;
        printf("On Division quotient is %d and Remainder is %d\n" , quotient , remainder);
    }else{
        printf("You cannot enter 0 for denominator!!!!\n");
    }
    return 0;
}