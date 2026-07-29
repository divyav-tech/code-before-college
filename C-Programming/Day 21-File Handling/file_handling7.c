#include <stdio.h>
int main(){
    FILE *fp;
    fp = fopen("content.txt" , "r");

    char str[100];
    fgets(str , sizeof(str) , fp);
    printf("%s" , str);
    return 0;
}