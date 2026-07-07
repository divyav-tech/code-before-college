#include <stdio.h>
void printPattern(int rows){
    for(int i =1 ; i<=rows ; i++){
        for(int j = 1 ; j<=i ; j++){
            printf("*");
        }
        printf("\n");
    }
}
int main(){
    int r ; 
    printf("Enter number of rows: ");

    scanf("%d", &r);
    printPattern(r);
    return 0;
}