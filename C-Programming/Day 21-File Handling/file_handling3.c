#include <stdio.h>
int main(){
    FILE *fp;
    fp = fopen("marks.txt" , "a");

    fprintf(fp , "Science = %d\n" , 90);
    fprintf(fp , "Computer Science = %d\n" , 87);

    printf("New informaton succesfully added!!\n");
    fclose(fp);

    return 0;
}