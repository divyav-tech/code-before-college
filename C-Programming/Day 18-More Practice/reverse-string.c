#include <stdio.h>
int main(){
    char str[100];

    printf("Enter a string here: ");
    scanf("%s" , str);

    char reversed[100];

    int n =0;   //Calculating no of elements in the string
    while(str[n] != '\0'){
        n++;
    }

    int j =0;
    while(j<n){
       reversed[j] =  str[n-1-j];
        j++;
    }
    printf("Your reversed String is : \n");
    // Character by Character printing
    // int i = 0;
    // while(i<n){
    //     printf("%c" , reversed[i]);
    //     i++;
    // }
    // printf("\n");

    // String Conversion
    reversed[n]= '\0';

    printf("%s" , reversed);
    return 0;
}