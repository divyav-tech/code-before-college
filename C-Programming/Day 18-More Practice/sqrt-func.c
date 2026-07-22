#include <stdio.h>
float square_root(float n){
    float guess = 1;
    for(int i = 0; i<=25 ; i++){
        guess = (guess + n/guess)/2;
    }
    return guess;
}
int main(){
    float n;
    printf("Enter a number to calculate its square-root: ");
    scanf("%f" , &n);
    printf("%.2f" , square_root(n));
    return 0;
}