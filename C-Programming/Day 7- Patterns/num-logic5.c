#include <stdio.h>
int main(){
    for(int i = 0 ; i<5 ; i++){
        for(int j = i ; j>=0 ; j--){
            printf("%d" , 5-j );
        }
        printf("\n");
    }
    return 0;
}