#include <stdio.h>
#include <string.h>
struct Student{
    int roll;
    char name[30];
    float marks;
};
int main(){
    struct Student s;
    
    printf("Enter Roll No: ");
    scanf("%d",&s.roll);
    
    printf("Enter name: ");
    scanf(" %[^\n]",s.name);
    
    printf("Enter Marks: ");
    scanf("%f" , &s.marks);

    printf("\n---Student Info---\n");
    printf("Roll no: %d\n" , s.roll);
    printf("Name: %s\n" , s.name);
    printf("Marks: %.2f\n" , s.marks);

    return 0;
}
