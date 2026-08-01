#include <stdio.h>
int main(){
    printf("-------------SIMPLE BANKING MENU-----------------\n");
    int balance = 0;
    while(1){
        printf("Menu:\n");
        printf("1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\n");
        int choice;
        printf("Choose an operation (1-4): ");
        scanf("%d" , &choice);

        switch (choice) {
    case 1:
        printf("Enter amount to deposit: ");
        int add;
        scanf("%d" , &add);
        balance += add;
        printf("Your updated balance is %d\n" , balance);
        break;
    case 2:
        printf("Enter amount to withdraw: ");
        int withdraw;
        scanf("%d" , &withdraw);
        if (withdraw > balance) {
            printf("You dont have enough balance!\n");
        } else {
            balance -= withdraw;
            printf("Your updated balance is %d\n", balance);
        }
        break;
    case 3:
        printf("Your Current Balance is %d\n" , balance);
        break;
    case 4:
        printf("Exiting...\n");
        return 0;
    default:
        printf("Invalid choice!\n");
    }

    }
    return 0;
}