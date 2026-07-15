#include <stdio.h>
#include <string.h>
struct Student{
    int roll;
    char name[30];
    float marks;
};
int main(){
    struct Student s1;

    s1.roll = 101;
    strcpy(s1.name , "Divya");
    s1.marks = 92.5;

    printf("Student Roll No: %d\n" , s1.roll);
    printf("Student Name: %s\n" , s1.name);
    printf("Marks: %f\n" , s1.marks);
    
    return 0;
}