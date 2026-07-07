#include <stdio.h>
int factorial(int n){

    int fact = 1;
    for(int i = 1; i<=n ; i++){
        fact *= i;
    }
    return fact;
}
int main(){
    int num = 5;
    int result = factorial(num);
    printf("Factorial of %d = %d\n" , num , result);
    return 0;
}