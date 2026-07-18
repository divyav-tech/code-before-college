#include <stdio.h>
int main(){
    int x = 10;
    int *p = &x;
    int **pp = &p;

    printf("Value of x: %d\n", x);
    printf("Value using *p: %d\n", *p);
    printf("Value using **pp: %d\n", **pp);

    return 0;
}
