#include <stdio.h>
int main(){
    float temp;
    printf("This a unit converter that convers temperature in Celcius to Fahrenheit\n");
    printf("Please enter Temperature in Celcius: ");
    scanf("%f" , &temp);
    float new_temp = (9/5)*temp +32;
    printf("Temperature in Fahrenheit is: %.2f F\n" , new_temp);
    return 0;
}