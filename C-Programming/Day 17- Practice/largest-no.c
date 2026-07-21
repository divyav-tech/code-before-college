#include <stdio.h>
int main(){
    int num1 , num2;
    
    printf("Enter first number: ");
    scanf("%d" , &num1);

    printf("Enter second number: ");
    scanf("%d" , &num2);

    if(num1>num2){
        printf("Larger number is %d" , num1);
    }else{
        printf("Larger number is %d" , num2);
    }
    return 0;
}