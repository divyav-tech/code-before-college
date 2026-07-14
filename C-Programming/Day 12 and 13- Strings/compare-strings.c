#include <stdio.h>
#include <string.h>
int main(){
    char str1[20] , str2[20];

    printf("Enter first string: ");
    fgets(str1,sizeof(str1),stdin);

    printf("Enter Second string: ");
    fgets(str2,sizeof(str2),stdin);

    int result = strcmp(str1,str2);

    if(result==0){
        printf("Both strings are equal.\n");
    }else{
        printf("Strings are not equal.\n");
    }
    return 0;
}