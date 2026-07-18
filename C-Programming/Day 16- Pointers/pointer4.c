#include <stdio.h>
void square(int*num){
    *num = (*num)*(*num);
}
int main(){
    int x = 6;
    square(&x);  //pass address of x
    printf("Square = %d" , x);
    return 0;
}