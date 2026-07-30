#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    printf("Password Rules for a Strong Password:\n");
    printf("- At least 8 characters\n");
    printf("- At least one uppercase letter\n");
    printf("- At least one lowercase letter\n");
    printf("- At least one digit\n");
    printf("- At least one special character\n\n");

    char password[50];
    int goodLength =0, hasUpper = 0, hasLower = 0, hasDigit = 0, hasSpecial = 0;
    
    int score = 0;
    while (score < 5) {
    printf("Enter password: ");
    scanf("%s", password);

    int length = strlen(password);
    goodLength = hasUpper = hasLower = hasDigit = hasSpecial = 0;

    if (length >= 8) goodLength = 1;
    for (int i = 0; i < length; i++) {
        char c = password[i];
        if (isupper(c)) hasUpper = 1;
        if (islower(c)) hasLower = 1;
        if (isdigit(c)) hasDigit = 1;
        if (!isalnum(c)) hasSpecial = 1;
    }

    score = hasUpper + hasLower + hasDigit + hasSpecial + goodLength;

    if (score == 5) {
        printf("Your Password is Strong!\n");
    } else if (score > 3) {
        printf("Your Password is Medium Strong. Try again for Strong.\n");
    } else {
        printf("Your Password is too weak. Try again.\n");
    }
}
    return 0;
}