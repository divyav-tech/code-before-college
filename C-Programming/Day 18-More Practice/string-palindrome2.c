#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100];
    char palindrome[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character
    str[strcspn(str, "\n")] = '\0';

    // Convert to lowercase
    int n = 0;
    while (str[n] != '\0')
    {
        str[n] = tolower(str[n]);
        n++;
    }

    // Reverse the string
    for (int i = 0; i < n; i++)
    {
        palindrome[i] = str[n - 1 - i];
    }
    palindrome[n] = '\0';

    // Compare
    int isPalindrome = 1;

    for (int i = 0; i < n; i++)
    {
        if (str[i] != palindrome[i])
        {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome == 1)
    {
        printf("The string %s is a palindrome.\n", str);
    }
    else
    {
        printf("The string %s is not a palindrome.\n", str);
    }

    return 0;
}