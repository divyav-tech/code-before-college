#include <stdio.h>

int main()
{
    int  original , num;
    int digits , armstrong = 0;

    printf("Enter your number to check if it's armstrong: ");
    scanf("%d" , &num);

    original = num;

    while(original != 0){
        original = original /10;
        digits++;
    }
    original = num;

    while(original != 0){
        int last_digit = original %10;
        original = original /10;
        int power = 1;
        for(int i = 0; i<digits ; i++){
            power *= last_digit ;
        }
        armstrong += power;
    }
    
    printf("Your num is %d\n"  , num);
    printf("armstrong  number comparison is: %d\n"  , armstrong);
    
    if(armstrong == num){
        printf("This is an armstrong number");
    }else{
        printf("This is not an armstrong number");
    }
    return 0;
}