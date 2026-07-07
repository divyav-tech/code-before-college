#include <stdio.h>
int main(){
    int i;
    for(i = 1; i<=20; i++){
        if(i == 3 ||i==6 || i==9 || i==12 || i==15 || i==18)
        continue;
        printf("%d\n", i);
    }
    
    return 0;
}