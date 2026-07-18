#include <stdio.h>
int main(){
    int a = 50;
    int *ptr = &a;
    int **pptr = &ptr;

    **pptr = 100; //Change value of a

    printf("Updated value of a: %d", a);
    return 0;
}