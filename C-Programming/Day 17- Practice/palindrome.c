#include <stdio.h>
int main(){
    int number , reverse , original;
    printf("Enter a number here: ");
    scanf("%d" , &number);
    original = number;

    while(number != 0){
        int last_place = number%10;
        reverse += reverse*10 + last_place;
        number = number/10;
    }

    if(reverse == original){
        printf("Them number you entered is a Palidrome!");
    }else{
        printf("This number is not a palidrome!");
    }

    return 0;
}