#include <stdio.h>

int main(){
    
    int a[] = {2,3,6,5,6};
    int *ptr=&a[0];
    printf("the value at address %u is %d",ptr+3,*(ptr+3));
    return 0;
}