#include <stdio.h>
void printPattern(){
    for(int i = 1; i<=5 ; i++){
        for(int j = 1; j<=i; j++ ) {
            printf("*");
        }
        printf("\n");
    }
}
int main(){

    printPattern();
    return 0;
}