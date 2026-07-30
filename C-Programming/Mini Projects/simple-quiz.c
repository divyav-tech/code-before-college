#include <stdio.h>
int main(){
   const char *questions[5] = {"The Sun is a Star." , "There are 58 weeks in an year." , "Water boils at 180F." , "A square is a rectangle too." , "Earth is 5th planet from the sun." }; 

    int answers[5] = { 1 , 0 , 1 , 1 , 0};
    printf("---------SIMPLE QUIZ TIME----------\n");
    printf("Rules:\n");
    printf("1 Each Question Is True/False Type\n2 Enter 1 for True and 0 for False\n3 There are only 5 easy questions\n4 You will get your score at the end!\n");

    int score = 0;
    int answer;
    for(int i = 0; i<5 ; i++){
        printf("%s\n"  , questions[i]);
        printf("Answer(1/0): ");
        scanf("%d" , &answer);

        if( answer == 1|| answer == 0){
            if(answer == answers[i]){
                printf("Correct!!\n");
                score ++;
            }else{
                printf("Oops wrong -_-\n");
            }
        }else{
            printf("Invalid answer!!\n");
        }
    }

    printf("Your Score is %d out of 5\n" , score);
    return 0;

}