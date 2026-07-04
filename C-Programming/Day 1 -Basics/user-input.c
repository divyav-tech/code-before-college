#include <stdio.h>
int main()
{
    char name[20];
    int age;
    printf("Enter your Name:");
    scanf("%s", &name);

    printf("Enter your age:");
    scanf("%d", &age);
    printf("Hello %s , you are %d years old.\n", name, age); // this is a program related to age
    return 0;
}