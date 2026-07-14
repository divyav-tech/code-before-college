#include <stdio.h>
#include <string.h>
int main(){
    char first[20] = "Divya ";
    char second[20]= "Verma!";
    strcat(first,second);
    printf("Result: %s" , first);
    return 0;
}
