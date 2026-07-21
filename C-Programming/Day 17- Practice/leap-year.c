#include <stdio.h>
int main(){
    int year;
    printf("Enter year number (ex -2026): ");
    scanf("%d", &year);

    int last_digits = year%100;

    if(last_digits % 4 ==0){
        printf("%d is a leap year" , year);
    }else{
        printf("%d is not a leap year" , year);
    }
    return 0;
}