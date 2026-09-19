#include <stdio.h>

int main(){
    int marks1;
    int marks2;
    int marks3;
    printf("Enter marks of three subjects: ");
    scanf("%d%d%d",&marks1, &marks2, &marks3);
    printf("Marks of three subjects are: %d, %d, %d", marks1, marks2, marks3);
    if (marks1<33 || marks2<33 || marks3<33){
        printf("\nYou are failed");
    }
    else if ((marks1+marks2+marks3)/3<40){
        printf("\nYou aare failed because of less percentage\n");
    }
        else
        {
        printf("\nYou are passed\n");
        }
    return 0;
}