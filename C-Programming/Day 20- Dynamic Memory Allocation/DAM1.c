#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr;
    ptr =(int*) malloc(sizeof(int));
    *ptr = 60;
    printf("%d" , *ptr);
    free(ptr);
    return 0;
}