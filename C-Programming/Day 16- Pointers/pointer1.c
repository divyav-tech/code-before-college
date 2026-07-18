#include <stdio.h>
int main(){
    int x = 10;
    int *ptr = &x;

    printf("Value of x: %d\n" , x);
    printf("Address of x: %p\n",ptr);
    printf("Value pointed by ptr: %d\n", *ptr);

    return 0;
}
