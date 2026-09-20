#include <stdio.h>
int count(int a[],int n){
    int noofpositive=0;
    for(int i=0;i<n;i++){
        if(a[i]>0){
            noofpositive++;
        }
    }
    return noofpositive;
}



int main(){
    int a[]={1,-2,3,-4,5};
    printf
("the number of positive numbers in the array is %d",count(a,5));
    
    return 0;
}