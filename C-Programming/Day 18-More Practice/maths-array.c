// Program to find sum and average of elements of an array
#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 7, 3, 3, 4, 5, 45, 4, 55};
    int sum = 0;

    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int average = sum / n;

    printf("Array is : {1 , 2, 7,3 ,3, 4,5 , 45 ,4 ,55}\n");
    printf("The sum of elements of array is %d\n", sum);
    printf("The average of elements of the array is: %d\n", average);
    return 0;
}