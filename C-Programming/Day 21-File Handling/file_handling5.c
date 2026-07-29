#include <stdio.h>
int main(){
    FILE *fp;
    fp = fopen ("letters.txt" , "r");
    char ch;
    // ch = fgetc(fp);
    // printf("%c", ch);

    // ch = fgetc(fp);
    // printf("%c", ch);

    // ch = fgetc(fp);
    // printf("%c", ch);

    // Way 2;
    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fp);

    return 0;
}