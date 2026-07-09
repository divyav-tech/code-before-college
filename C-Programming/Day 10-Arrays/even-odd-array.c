#include <stdio.h>
// Count Even and odd numbers
int main(){
    int arr[5] = {1,2,3,4,5};
    int even=0;
    int odd=0;

    for(int i=0 ; i<5 ; i++){
        if( arr[i]%2 == 0){
            even+=1;
        }else{
            odd+=1;
        }
    }
    printf("For array = {1,2,3,4,5}\n");
    printf("Odd numbers= %d\n" , odd);
    printf("Even numbers = %d" , even);

    return 0;
}

