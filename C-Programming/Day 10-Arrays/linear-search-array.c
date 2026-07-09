#include <stdio.h>
// Linear search
int main(){
    int arr[5]= {1,2,5,7,0};
    int search;
    int found=0;

    printf("Our Array is {1,2,5,7,0}\n");
    printf("Search value: ");
    scanf("%d" ,&search);

    for(int i=0; i<5 ; i++){
        if(search == arr[i]){
            printf("Found at index %d", i);
            found=1;
        }
    }
    if(found ==0){
        printf("Not found!");
    }
    return 0;
}
