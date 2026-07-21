#include <stdio.h>

int fib(int n) {
    if (n <= 1) {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    printf("Until how many terms do you want your Fibonacci series to go? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("%d ", fib(i));
    }
    printf("\n");
    return 0;
}