#include <stdio.h>
int main(){
    int numbers[5] = {10,11,12,13,14};

    for(int i = 4 ; i>=0 ; i--){
        printf("%d\n" , numbers[i]);
    }
    return 0;
}