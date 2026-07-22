#include <stdio.h>
int main(){
    char str[100];

    printf("Enter a string here to Calculate its length: ");
    scanf("%s" , str);

    int i =0;
    while(str[i] != '\0'){
        i++;
    }

    printf("The number of characters in %s is %d\n" , str ,i);
}