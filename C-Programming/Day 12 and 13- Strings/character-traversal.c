#include <stdio.h>
#include <string.h>
int main(){
    char str[] = "Education";
    for(int i = 0; str[i] != '\0'; i++){
        printf(" %c\n", str[i]);
    }
    return 0;
}