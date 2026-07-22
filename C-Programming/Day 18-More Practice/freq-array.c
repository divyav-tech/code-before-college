#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 3, 2, 2, 1, 3, 4, 5, 2, 1};
    int input;
    int freq = 0;

    printf("------------ARRAY FREQUENCY CALCULATOR---------------\n");
    printf("Our array is arr[] = {1 , 2, 3 , 3 ,2  ,2 ,1  ,3 ,4 , 5,2, 1 }\n");

    printf("Enter an element u wish to know frequency of: ");
    scanf("%d", &input);

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        if (input == arr[i])
        {
            freq++;
        }
    }
    if (freq == 0)
    {
        printf("This element is not present in the array\n");
    }
    else
    {
        printf("The frequency of %d in array is %d\n", input, freq);
    }
    return 0;
}