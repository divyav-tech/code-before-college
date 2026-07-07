#include <stdio.h>
int main(){
    for( int i = 0 ; i<5 ; i++){
        for(int j = 5 ; j>=5-i ; j--){
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}