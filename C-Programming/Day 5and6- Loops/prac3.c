#include <stdio.h>
int main(){
    int i;
    printf("Please enter 0 here: ");
    scanf("%d",&i );
    while (i!=0)
    {
        printf("Enter 0!! \n");
        scanf("%d",&i);
        if(i == 0)
        break;

    }
    return 0;
    
    
}