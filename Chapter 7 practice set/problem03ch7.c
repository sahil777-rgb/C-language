#include <stdio.h>

// Reverses the array in place by swapping the first and last elements,
// then the second and second-last, and so on.
void reverse(int arr[], int n){
    for (int i = 0; i < n / 2; i++){
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
}

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);   // number of elements

    printf("Original array: ");
    printArray(arr, n);

    reverse(arr, n);

    printf("Reversed array: ");
    printArray(arr, n);

    return 0;
}