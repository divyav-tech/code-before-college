#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int a, b;
    printf("-------GCD and LCM Finder--------\n");
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter your second number: ");
    scanf("%d", &b);

    int result = gcd(a, b);
    long long lcm = ((long long)a * b) / result;

    printf("GCD of %d and %d is %d\n", a, b, result);
    printf("LCM of %d and %d is %lld\n", a, b, lcm);
    return 0;
}