#include <stdio.h>
int main(){
    int i,j,space;
    for(i = 1 ; i <= 3 ;i++){
        for(space = 3-i; space>0; space--){
            printf(" ");
        }
        for(j = 1; j<=2*i - 1 ; j++){
            printf("*");
        }
        printf("\n");
    }
    for(i = 2; i>=1 ; i--){
        for(space = 3-i ; space>0 ; space--){
            printf(" ");
        }
        for(j = 1; j<=2*i - 1; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}