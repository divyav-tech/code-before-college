#include <stdio.h>
int main(){
    int age;
    char citizen;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Are you an Indian citizen? (Y/N): ");
    scanf(" %c", &citizen);

    if(age>=18){
        if(citizen == 'Y' || citizen == 'y'){
            printf("You are eligible to vote in India. \n");
        }
        else{
            printf("You are not eligible to vote in India. \n");
        };
    }
    else{
        printf("You are not old enough to vote. \n");
    };

    return 0;
}
