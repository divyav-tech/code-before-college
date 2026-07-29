#include <stdio.h>
int main(){
    FILE *fp = fopen("content.txt" , "w");

    char str[100];
    fputs("Hello I am Divya!!\n",fp);
    fputs("Welcome!" , fp);
    printf("Content succesfullt added to your file!");
    fclose(fp);
    return 0;
}