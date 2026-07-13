#include <stdio.h>
int main(){
    char name[20];
    printf("Enter you name: ");
    scanf("%s",&name);

    printf("Hello %s!" , name);
    return 0;
}