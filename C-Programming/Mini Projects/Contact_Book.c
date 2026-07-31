#include <stdio.h>
#include <string.h>
int main(){
    struct Contact {
        char name[50];
        char phone[15];
    };
    struct Contact contacts[100];
    int count = 0;
    printf("-------------------CONTACT BOOK--------------------\n");

    while(1){
        printf("Menu:\n");
        printf("1. Add Contact\n2. View All\n3. Search\n4. Exit\n");
        int choice;
        printf("Choose an operation (1-4): ");
        scanf("%d" , &choice);
        printf("\n");

        switch(choice){
            case 1:
            printf("Please Enter Following Details to Add a Contact:\n");
            printf("Enter Name: ");
            scanf("%s" , contacts[count].name);
            printf("Enter Phone Number: ");
            scanf("%s" , contacts[count].phone);
            count ++;
            printf("\n");
            break;

            case 2:
            printf("Here is the list of all Contacts: \n");
            for(int i = 0; i<count ; i++){
                printf("Contact %d\n" , i+1);
                printf("%s\n" , contacts[i].name);
                printf("%s\n" , contacts[i].phone);
                printf("\n");
            }
            break;

            case 3:{
            char search[50];
            printf("Search Name: ");
            scanf("%s", search);
            int found = 0;
            for (int i = 0; i < count; i++) {
                if (strcmp(contacts[i].name, search) == 0) {
                    printf("Contact %d\n", i);
                    printf("%s\n", contacts[i].name);
                    printf("%s\n", contacts[i].phone);
                    found = 1;
                }
            }
            if (!found) {
                printf("Contact Not Found!\n");
            }
            break;
        }

            case 4:
            printf("Exiting...\n");
            return 0;

            default:
            printf("Invalid choice!\n");
        }
    }
    return 0;
}