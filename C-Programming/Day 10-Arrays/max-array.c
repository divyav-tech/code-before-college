#include <stdio.h>
int main(){
    int numbers[5] = {10,90,30,70,50};
    int max = numbers[0];
    for(int i = 1 ; i<5 ;i++){
        if (numbers[i]>max){
            max=numbers[i];
        }
    }
    printf("Max = %d", max);
    return 0;
}