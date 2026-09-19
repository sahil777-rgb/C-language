#include <stdio.h>

// Returns the address of the sum
int* sum(int a, int b){
    static int result;      // static: stays alive after the function ends
    result = a + b;
    return &result;
}

// Returns the address of the average
float* average(int a, int b){
    static float result;
    result = (a + b) / 2.0f;
    return &result;
}

int main(){
    int x = 3;
    int y = 4;
    int *ptr1;
    float *ptr2;

    ptr1 = sum(x, y);
    ptr2 = average(x, y);

    printf("the address of sum is %p\n", (void *)ptr1);
    printf("the sum is %d\n", *ptr1);

    printf("the address of average is %p\n", (void *)ptr2);
    printf("the average is %.2f\n", *ptr2);

    return 0;
}