#include <stdio.h>
void change_value (int*);
void change_value (int *a){
    *a=*a*10;
}

int main(){
    int i = 4;
    printf("the value of i is %d", i);
    change_value(&i);
    printf("the value of i is %d", i);
    return 0;
}