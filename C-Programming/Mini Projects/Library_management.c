#include <stdio.h>
#include <string.h>
int main(){
    printf("---------------LIBRARY MANAGEMENT------------------\n");

    struct Book {
        char title[100];
        char author[100];
        int isIssued;
    };

    struct Book books[100]={
        {"The Alchemist", "Paulo Coelho", 0},
        {"1984", "George Orwell", 0},
        {"Wings of Fire", "A.P.J. Abdul Kalam", 0},
        {"The Hobbit", "J.R.R. Tolkien", 0},
        {"Atomic Habits", "James Clear", 0}
    };
    int count = 5;

    while(1){
        printf("-------MENU--------\n");
        printf("1. Add Book\n2. View All Books\n3. Issue a Book\n4. Return a Book\n5. Exit\n");

        int choice;
        printf("Choose an operation(1-5): ");
        scanf("%d" , &choice);

        switch(choice){
            case 1:
            if(count >= 100){
                printf("Library is full, can't add more books!\n");
                break;
            }
            printf("Enter Book Name: ");
            scanf(" %99[^\n]" , books[count].title);
            printf("Enter Author Name: ");
            scanf(" %99[^\n]" , books[count].author);
            books[count].isIssued = 0;
            count ++;
            break;

            case 2:
            for(int i = 0; i<count ; i++){
                printf("Book Number: %d\n" , i+1);
                printf("Book Name: %s\n" , books[i].title);
                printf("Author Name: %s\n" ,books[i].author);
                if(books[i].isIssued == 0){
                    printf("Available!\n");
                }else{
                    printf("Not Available!\n");
                }
            }
            break;

            case 3: {
            char search_title[100];
            int found = 0;
            printf("Book Title: ");
            scanf(" %99[^\n]" , search_title);

            for(int i = 0; i<count ; i++){
                if(strcmp(books[i].title, search_title) == 0){
                    if(books[i].isIssued == 0){
                        printf("Issuing to you.....\n");
                        books[i].isIssued = 1;
                    } else {
                        printf("Alraedy Issued , can't issue again!!\n");
                    }
                    found = 1;
                }
            }
            if(found == 0){
                    printf("Book Not Found -_-\n");
                }
            break;
            }

            case 4: {
            char title[100];
            int found = 0;
            printf("Book Title: ");
            scanf(" %[^\n]" , title);

            for(int i = 0; i<count ; i++){
                if(strcmp(books[i].title, title) == 0){
                    books[i].isIssued = 0;
                    printf("Book returned successfully...\n");
                    found = 1;
                }
            }
            if(found == 0){
                    printf("Book Not Found (This book might be from some other Library!!) -_-\n");
                }
            break;
            }

            case 5:
            printf("Exiting...........\n");
            return 0;

            default:
            printf("Invalid choice!\n");
        }
    }
    return 0;
}