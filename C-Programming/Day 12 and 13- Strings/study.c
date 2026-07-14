#include <stdio.h>
int main(){
    // int input;

    // while(1){
    //     printf("Enter a number (0 to stop loop): ");
    //     scanf("%d", &input);
    //     if(input==0){
    //         printf("You exited the loop by entering 0!!\n");
    //         break;
    //     }
    //     printf("You entered: %d\n",input);
    // }
    char input[100];
    printf("Please enter a string!: ");
    fgets(input,sizeof(input),stdin);
    
    for(int i=0; input[i]!='\0';i++){
        char ch= input[i];
        if(ch=='A'||ch =='a' || ch=='E'||ch =='e' || ch=='I'||ch =='i' || ch=='O'||ch =='o' ||ch=='U'||ch =='u'){
            continue;
        } 
        printf("%c",ch);
    }
    return 0;
}