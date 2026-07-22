#include <stdio.h>
float power(int num, int p)
{
    if (p >= 0)
    {
        if (p == 1)
        {
            return num;
        }else if(p==0){
            return 1;
        }
        return num * power(num, p - 1);
    }
    else
    {
        p = -p;
        return 1 / (num * power(num, p - 1));
    }
}
int main() 
{
    int num, p;

    printf("---------CALCULATE EXPONENTS----------\n");
    printf("Please enter a base number: ");
    scanf("%d", &num);

    if(num <= 0){
        printf("Your base number cannot be zero or negative integer!");
    }
    else{
    printf("Enter the power: ");
    scanf("%d", &p);

    printf("%d raised to the power %d is %.2f\n", num, p, power(num, p));
    }
    return 0;
}