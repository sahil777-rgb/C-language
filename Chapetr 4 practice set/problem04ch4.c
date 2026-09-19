#include <stdio.h>

int main(){
    int n=10;
    int i;
    int g=0;
    for (int i=1;i<=n;i++)
     g+=i;
    
    printf("the sum of the numbers is %d", g);

    return 0;
}