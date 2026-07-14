#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i, vowels = 0;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'A' || str[i] == 'a' || str[i] == 'E' || str[i] == 'e' || str[i] == 'I' || str[i] == 'i' || str[i] == 'O' || str[i] == 'o' || str[i] == 'U' || str[i] == 'u')
        {
            vowels++;
        }
    }
    printf("Number of vowels: %d\n", vowels);
    return 0;
}