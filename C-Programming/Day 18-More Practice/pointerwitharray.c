#include <stdio.h>
int main(){
    int arr[]={10,20,30,40,50};
    int *ptr = arr; //Points to first  element

    printf("Array elements using pointer:\n");

    for(int i=0; i<5 ; i++){
        printf("%d ",*(ptr + i) );
    }
    return 0;
}