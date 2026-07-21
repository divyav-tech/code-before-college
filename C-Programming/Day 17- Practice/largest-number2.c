#include <stdio.h>
int main(){
    int num1 , num2 , num3 , largest;
    
    printf("Enter first number: ");
    scanf("%d" , &num1);

    printf("Enter second number: ");
    scanf("%d" , &num2);

    printf("Enter third number: ");
    scanf("%d" , &num3);

    if(num1>num2){
        largest = num1;
    }else{
        largest = num2;
    }

    if(num3> largest){
        largest = num3;
    };

    printf("The largest of these three numbers is : %d\n" , largest);
    return 0;
}