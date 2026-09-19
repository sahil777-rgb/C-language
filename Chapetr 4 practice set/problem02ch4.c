#include <stdio.h>

int main(){
    int n=10;
    int i;
    for (i=10;i>=1;i--){
        printf("%d X %d = %d\n", n,i,n*i);
    }
    return 0;
}