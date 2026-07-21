#include <stdio.h>
int main(){
    int num;
    int sum = 0;
    printf("Enter a number:  ");
    scanf("%d" , &num);

    while(num !=0){
        int last_digit = num %10;
        num = num/10;
        sum += last_digit;
    }

    printf("The sum of digits of your entered number is: %d" ,sum);
    return 0;
}
