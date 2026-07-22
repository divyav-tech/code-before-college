#include <stdio.h>
void update(int **ptr){
    **ptr = 999;
}
int main(){
    int x = 10;
    int *p = &x;

    update(&p);  //Pass address of pointer

    printf("Updated value of  x: %d\n" , x);
    return 0;

}