#include <stdio.h>
int main(){
    int a = 5 ;
    int b = 2;
    printf("Initially a = %d and b = %d \n" , a , b);

    int temp = a;
    a=b;
    b = temp;

    printf("Swapped values:\n");
    printf("a = %d \nb = %d" , a , b);
    return 0;
}