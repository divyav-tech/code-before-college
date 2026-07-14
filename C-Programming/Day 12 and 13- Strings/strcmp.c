#include <stdio.h>
#include <string.h>
int main(){
    char a[]="Apple";
    char b[]= "Bread";
    int result= strcmp(a,b);
    printf("Comparison result: %d" , result);
    return 0;
}