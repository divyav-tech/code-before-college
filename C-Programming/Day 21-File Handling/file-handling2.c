#include <stdio.h>

int main()
{
    FILE *fp;
    char subject[20];
    int marks;

    fp = fopen("marks.txt", "r");

    if (fp == NULL)
    {
        printf("File not found.\n");
        return 1;
    }

    fscanf(fp, "%s = %d", subject, &marks);

    printf("%s = %d\n", subject, marks);

    fclose(fp);

    return 0;
}