#include <stdio.h>

int main(){
    int year;
    printf("enter year: ");
    scanf("%d",&year);
    if(year%4==0 || year%100!=0 || year%400==0){
        printf("the year is a leap year");
    }
    else {
        printf("this year is not a leap year");
    }
    return 0;
}