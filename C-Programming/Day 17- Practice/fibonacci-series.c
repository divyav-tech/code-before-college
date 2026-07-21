#include <stdio.h>
int main(){
    int first , sum = 0; 
    int second = 1;
    int n;

    printf("Until how many terms do you want your Fibonacci series to go?");
    scanf("%d" , &n);

    for(int i = 0; i<n ; i++){
        printf("%d " , sum);
        first = second ;
        second = sum;
        sum = first +second;
    }
    printf("\n");
    return 0;
}