#include <stdio.h>
int main(){
    for(int i = 5 ; i>= 0; i--){
        for(int j = 0 ; j<i ; j++){
            printf("%d" , j+1);
        }
        printf("\n");
    }
    return 0 ; 
}