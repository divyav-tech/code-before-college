#include <stdio.h>
int main(){
    printf("----------MULTIPLICATION TABLE GENERATOR----------\n");
    int n;
    int range;
    printf("Enter a number: ");
    scanf("%d" , &n);

    printf("Print table upto how many terms? ");
    scanf("%d" , &range);

    printf("Multiplication Table of %d upto %d terms is:\n" , n , range);

    for(int i = 1 ; i<=range ;i++){
        printf("%d * %d = %d\n" , n , i , n*i);
    }
    return 0;
}