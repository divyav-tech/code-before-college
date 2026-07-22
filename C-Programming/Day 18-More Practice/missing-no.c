//Find missing number in an array of 1 to 20
#include <stdio.h>
int main(){
    int arr[] = {1, 2, 3 , 5, 6, 7 , 8, 9 ,10};
    int sum = 0;

    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    int expect_sum =( (n+1)*(n+2))/2;

    int missing_no = expect_sum - sum;

    printf("Missing no. from the array is %d\n" , missing_no);
    return 0;
}

// Method by loop  (Only works for sorted arrays)
// #include <stdio.h>
// int main(){
//     int arr[] = {1, 2, 3 , 5, 6, 7 , 8, 9 ,10};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int missing_no;
//     for (int i = 0; i < n; i++)
//     {
//         if(arr[i] != i+1){
//             missing_no = i+1;
//             break;
//         }
//     }
//      printf("Missing no. from the array is %d\n" , missing_no);
//     return 0;

// }