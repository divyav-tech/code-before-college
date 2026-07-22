#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 2, 3, 1, 1, 4, 5, 3, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int unique[n]; // Empty string jisme sirf ham unique values hi add krenge
    int count = 0; // To track the number of elements in unique after each upgrade

    for (int i = 0; i < n; i++)
    {
        int found = 0; // Helping variable that can track if we found same element in both arrays or not

        for (int j = 0; j < count; j++)
        {
            if (unique[j] == arr[i])
            {
                found = 1;
                break;
            }
        }

        if (found == 0)
        {
            unique[count] = arr[i];
            count++;
        }
    }
    printf("Unique elements are: ");
    for (int i = 0; i < count; i++)
    {
        printf("%d ", unique[i]);
    }
    return 0;
}