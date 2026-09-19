#include <stdio.h>

int main(){
    int n=8;
    int i=8;
    do {
        printf("%d ", n * i);
        i--;
    } while (i >= 1);
    int sum = 0;
    sum *= i;
    printf("the sum of numbers is %d", sum);
    return 0;
}