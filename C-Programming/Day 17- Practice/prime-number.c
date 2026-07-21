#include <stdio.h>
int main(){
    printf("Prime numbers between 1 and 100 are:\n");
    for(int i = 2 ; i<=100 ;i++){
        int isPrime = 1;
        for (int j = 2 ; j<i ; j++) {
            if(i%j==0){
                isPrime=0;
                break;
            }
        }
        if(isPrime==1){
            printf("%d " , i);
         }
    }
    return 0;
}