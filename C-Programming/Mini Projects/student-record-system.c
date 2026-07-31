#include <stdio.h>
int main()
{
    struct Student
    {
        char name[50];
        int rollNo;
        float marks;
    };

    struct Student students[100] = {
        {"Aarav", 1, 92.6},
        {"Bhavya", 2, 93.8},
        {"Chirag", 3, 90.2},
        {"Divya", 4, 89.8},
        {"Radhika", 5, 91.6}};
    int count = 5;

    printf("-----------------------STUDENT RECORD SYSTEM------------------------\n");

    while (1)
    {
        printf("Menu:\n");
        printf("1. Add Student\n2. View All Students\n3. Search  by Roll Number\n4. Exit\n");
        int choice;
        printf("Choose an operation (1-4): ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Please Enter Following Details to Add a Student:\n");
            printf("Enter Name: ");
            scanf("%s", students[count].name);
            printf("Enter Roll No.: ");
            scanf("%d", &students[count].rollNo);
            printf("Enter Marks: ");
            scanf("%f", &students[count].marks);
            count++;
            printf("\n");
            break;

        case 2:
            for(int i = 0; i<count ;  i++){
                printf("Student %d " , i+1);
                printf("Name: %s\n" , students[i].name);
                printf("Roll No.: %d\n" , students[i].rollNo);
                printf("Marks: %.2f\n" , students[i].marks);
                printf("\n");
            }
            break;

        case 3:
            int search_roll;
            int found = 0;
            printf("Enter roll number of student: ");
            scanf("%d" , &search_roll);
            for(int i = 0 ; i<count ; i++){
                if(search_roll == students[i].rollNo){
                    printf("Name: %s\n" , students[i].name);
                    printf("Roll No.: %d\n" , students[i].rollNo);
                    printf("Marks: %.2f\n" , students[i].marks);
                    printf("\n");
                    found = 1;
                    break;
                }
            }
            if(found ==0){
                    printf("Student record not found!\n");
                }
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