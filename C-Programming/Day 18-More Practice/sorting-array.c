// Sorting array is ascending and descending order
#include <stdio.h>
int main()
{
    int arr[] = {3, 6, 1, 9, 0, 12, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int temp;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if(arr[j]> arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Ascending order: ");

    for(int i = 0; i<n ; i++){
        printf("%d " , arr[i]);
    }

    printf("\n");
    // Descending order

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if(arr[j]< arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Descending order: ");

    for(int i = 0; i<n ; i++){
        printf("%d " , arr[i]);
    }
    return 0;
}