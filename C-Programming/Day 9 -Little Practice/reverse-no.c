#include <stdio.h>
int main(){
    // Reverse the digits of a 3 digit number
    int num = 378;
    int reverse = 0;

    printf("Initial number is: %d\n" , num);
    int last_place = num%10 ;
    reverse += last_place*100;

    num = (num)/10;
    int second_place = num%10;
    reverse += second_place*10;

    num = (num)/10;
    int first_place = num%10;
    reverse += first_place;

    printf("Reversed number is: %d" , reverse);
    return 0;
}