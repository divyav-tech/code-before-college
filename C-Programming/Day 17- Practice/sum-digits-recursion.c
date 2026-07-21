#include <stdio.h>
int sum_digits(int n){
    if(n==0){
        return 0;
    }
    return n%10 + sum_digits(n/10);
}
int main(){
    int n;
    printf("Enter a number here: ");
    scanf("%d" , &n);
    int original = n;
    
    if(n < 0){
        n = -n;
        printf("This is a negative number so showing the digit sum of absolute value!\n");
    }

    printf("Sum of digits of %d is %d\n" , original ,sum_digits(n));
    return 0;
}