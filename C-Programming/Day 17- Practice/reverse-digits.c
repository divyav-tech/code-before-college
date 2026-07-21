#include <stdio.h>
int main(){
    int num;
    int reverse = 0;
    printf("Enter you number here: ");
    scanf("%d" ,&num);
    while(num > 0){
        int last_digit = num%10;
        reverse = reverse*10 + last_digit;
        num = num/10;
    }
    printf("Reversed number is : %d" , reverse);
    return 0;
}