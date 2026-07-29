#include <stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("marks.txt" , "w");

    if(fp == NULL){
        printf("This file could not be opened\n");
        return 1;
    }

    fprintf(fp , "Maths = %d\n" , 95);
    fprintf(fp , "English = %d\n" , 88);

    fclose(fp);

    printf("Data has been successfully written!!\n");
    return 0;
}