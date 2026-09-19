#include <stdio.h>

int main(){
    int n=8;
    int sum=0;
    int i=1;
    for(int i=1;i<=10;i++){
    sum+=(n*i);
    }
    
    printf("the sum of numbers is %d",sum);
    return 0;
}