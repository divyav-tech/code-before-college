#include <stdio.h>
int main(){
    int arr[5] = {10,20,3,40,50,};
    int min = arr[0];

    for(int i=0 ;i<5 ; i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }

    printf("Minimum value is: %d" , min);
    return 0;
}
