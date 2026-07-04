#include <stdio.h>
int main(){
    int num;
    while(1){
        printf("Enter a number (0 to stop): ");
        scanf("%d", &num);
        if(num == 0){
            break;
        }
        printf("You Entered: %d\n" ,num);
    }
    return 0;
}