#include <stdio.h>
int main(){
    int x = 25;
    int *p = &x;
    int **pp = &p;

    printf("Address of x: %p\n" , &x);
    printf("Address stored in p: %p\n" , p);
    printf("Address stored in pp: %p\n" , pp);
    printf("Value of x using **pp: %d\n" , **pp);

    return 0;
}