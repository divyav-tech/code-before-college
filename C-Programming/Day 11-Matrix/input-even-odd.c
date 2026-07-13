// Taking input and finding even and odd
#include <stdio.h>
int main(){
    int matrix[2][3];

    printf("Enter six elements of your matrix:\n");
    for(int i=0; i<2 ; i++){
        for(int j=0; j<3 ; j++){
            scanf("%d " , &matrix[i][j]);
        }
    }

    printf("Your matrix is:\n");
    for(int i=0; i<2 ; i++){
        for(int j=0; j<3 ; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    int even =0;
    int odd=0;

    for(int i=0; i<2 ; i++){
        for(int j=0; j<3 ; j++){
            if(matrix[i][j]%2 ==0){
                even+=1;
            }else{
                odd+=1;
            }
        }
    }

    printf("You Entered %d even numbers and %d Odd numbers" , even , odd);
    return 0;
}