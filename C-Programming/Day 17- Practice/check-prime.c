#include <stdio.h>
int isPrime(int num ){
    if(num <= 1){
        return 0;
    }
    for(int j = 2 ; j<num ; j++){
        if(num%j == 0){
            return 0;
        }
    }
    return 1;
    }

int main(){
    int num ;
    printf("Enter a number to check if its prime: ");
    scanf("%d"  , &num);

    if(isPrime(num)){
        printf("This is Prime number.");
    }else{
        printf("This is not a prime number.");
    }

    return 0;
}