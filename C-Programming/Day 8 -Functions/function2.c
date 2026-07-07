#include <stdio.h>
//Declaration
int add(int a , int b);

int main(){
    int result = add(5,10);
    printf("Sum is: %d\n", result);
    return 0;
}
//Definition
int add(int a ,int b){
    return a +b ;
}