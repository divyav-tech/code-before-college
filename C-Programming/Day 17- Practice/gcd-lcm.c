#include <stdio.h>
int main(){
    int a, b, temp;
    printf("-------GCD and LCM Finder--------\n");
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter your second number: ");
    scanf("%d", &b);

    int x = a, y = b;   

    while (y != 0) {
        temp = y;
        y = x % y;
        x = temp;
    }
    int gcd = x;

    printf("GCD of %d and %d is %d\n", a, b, gcd);

    long long lcm = ((long long)a * b) / gcd;
    printf("LCM of %d and %d is %lld\n", a, b, lcm);
    return 0;
}