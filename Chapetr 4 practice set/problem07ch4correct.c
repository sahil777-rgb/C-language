#include <stdio.h>

int main(){
    int product=1;int n=8;
    for(int i=1;i<=8;i++){
        product *=i;
    }
    printf("the product of numbers is %d",product);
    return 0;
}