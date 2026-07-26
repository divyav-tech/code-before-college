#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr = malloc(5 * sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        printf("Before assigning: %d\n", arr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        arr[i] = (i + 1) * 100;
    }

    printf("\nAfter assigning:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    free(arr);
    arr = NULL;

    return 0;
}