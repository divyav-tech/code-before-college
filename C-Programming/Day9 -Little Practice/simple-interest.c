#include <stdio.h>
int main(){
    int P , T , SI;
    printf("This is a Simple Interest Calculator <3 (for rate of interest 10%)\n");
    printf("Please Enter Principle Amount (in INR): ");
    scanf("%d" , &P);

    printf("Please enter duration (in years): ");
    scanf("%d", &T);

    SI = P*T*0.1;
    printf("Your Simple Interest for principle amount of %d deposited for %d years will be %d\n" , P , T , SI);
    printf("So your total amount will become %d" , P+ SI);
    return 0;
}