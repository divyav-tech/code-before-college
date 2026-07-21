#include <stdio.h>
long long fact(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * fact(n - 1);
}
int main()
{
    int n;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &n);
    if (n >= 0)
    {
        printf("Factorial is %lld\n", fact(n));
    }
    else
    {
        printf("Error !! Please enter non negative number");
    }
    return 0;
}