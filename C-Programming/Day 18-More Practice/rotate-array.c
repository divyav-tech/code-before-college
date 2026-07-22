// Left/right rotate an array by K positions
#include <stdio.h>
int main(){
    int arr[] = {10,20,30,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 2;
    k = k % n;

    printf("Our original array is :");
    for(int i = 0; i<n ; i++){
        printf("%d " , arr[i]);
    }
    printf("\n");
    // Left Rotation (value at k should now be at 0)
    int left_rotated[n];
    
    for(int i = 0; i<n ; i++){
         left_rotated[i] = arr[(i+k)%n];
    }
    printf("Left Rotated Array by k = 2 is: ");
    for(int i = 0; i < n; i++){
        printf("%d " , left_rotated[i]);
    }

    printf("\n");
    // Right Rotation by k = 2 (Element at n - k position should be at 0);
    int right_rotated[n];

    for(int i = 0; i<n ; i++){
        right_rotated[i] = arr[(i + n -k)%n];
    }
    printf("Right Rotated Array by k = 2 is: ");
    for(int i = 0; i < n; i++){
        printf("%d " , right_rotated[i]);
    }

    return 0;
}