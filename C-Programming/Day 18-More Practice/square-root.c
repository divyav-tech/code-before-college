#include <stdio.h>
int main(){
    float guess , number;
    printf("---------SQUARE ROOT CALCULATOR---------\n");

    printf("Enter a number: ");
    scanf("%f" , &number);
    guess=1;
    
    if(number<0){
        printf("NOT VALID!!");
    }
    else if(number==0){
        printf("Square root of the number is: 0");
    }else{
    for(int i = 1; i<=20 ; i++){
        guess = (guess + number/ guess) /2;
    }
    printf("Square root of %.2f is %.2f\n" ,number , guess);
    }
    return 0;
}