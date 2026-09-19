#include <stdio.h>
int fibonacci(int n){
    if(n==2){
        return 1;
    }
    else if(n==1){
        return 0;
    }
    else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
    
}

int main(){
    int n=5;
    printf("the value of fibonacci series at position %d is %d", n, fibonacci(n));
    
    return 0;
}