#include <stdio.h>
int main(){
    printf("-------------STUDENT MARKS CALCULATOR------------------\n");
    const char *subjects[5] = {"Maths" , "Physics" , "Chemistry" , "English" ,"Computer Science"};

    int marks[5];
    for(int i = 0 ; i<5 ; i++){
        printf("Enter your marks in %s (out of 100): " ,subjects[i]);
        scanf("%d" , &marks[i]);
    }

    int total =0;

    for(int i = 0; i<5 ; i++){
        total += marks[i];
    }

    float average = total/5.0;
    char grade;
    if(average>=90){
        grade = 'A';
    }else if(average >=75){
        grade = 'B';
    }else if(average >=60){
        grade = 'C';
    }else if(average >=45){
        grade = 'D';
    }else{
        grade = 'F';
    }

    printf("You have obtained %d marks out of 500 with average of %.2f and got %c grade\n" , total , average , grade);
    return 0;
}