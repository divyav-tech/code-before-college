#include <stdio.h>
int main(){
    char str[100];

    printf("Enter a string here: ");
    scanf("%s" , str);


    char palindrome[100];

    int n =0;
    while(str[n] != '\0'){
        n++;
    }
    
    int j =0;
    while(j<n){
       palindrome[j] =  str[n-1-j];
        j++;
    }

    palindrome[n] = '\0';

    int isPalindrome = 0;
    for(int i = 0 ; i<n ; i++){
        if(str[i] != palindrome[i]){
            isPalindrome = 1;
            break;
        }
    }
    if(isPalindrome == 0){
        printf("%s is a palindrome.\n" , str);
    }else{
        printf("%s is not a palindrome.\n" , str);
    }
    return 0;
}