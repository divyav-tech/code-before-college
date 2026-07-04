#include <stdio.h>
int main(){
    char light;
    printf("Enter Trafic Light color (R/G/Y): ");
    scanf("%c", &light);

    if(light == 'R'|| light == 'r'){
        printf("Red Light -> STOP\n");
    }
    else if(light == 'G'|| light == 'g'){
        printf("Green Light -> GO\n");
    }
    else if(light == 'Y'|| light == 'y'){
        printf("Yellow Light -> READY/SLOW DOWN\n");
    }
    else{
        printf("Invalid Traffic Light Color\n");
    }
    return 0;

    
}