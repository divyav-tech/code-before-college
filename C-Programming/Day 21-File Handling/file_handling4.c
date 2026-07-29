#include <stdio.h>
int main()
{
    FILE *fp = fopen("letters.txt", "w");

    fputc('C', fp);
    fputc('A', fp);
    fputc('T', fp);

    printf("CAT written in your file!");

    fclose(fp);
    return 0;
}