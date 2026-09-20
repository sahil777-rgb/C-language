#include <stdio.h>
void printarray(int arr[], int n){
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

}
void reverse(int arr[], int n){
    for (int i = 0; i < n / 2; i++){
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    printarray(arr, 6);
    reverse(arr, 6);
    printarray(arr, 6);
    
    return 0;
}