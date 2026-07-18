#include <stdio.h>
int main(){
    int x = 5;
    int *ptr = &x;

    *ptr = 20;

    printf("Updated value of x: %d\n" , x);
    return 0;
}