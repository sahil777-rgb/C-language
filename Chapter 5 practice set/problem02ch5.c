#include <stdio.h>
float average(float a, float b, float c){
    return (a + b + c) / 3.0;
}

int main(){
    float a=2.0, b=4.0, c=6.0;
    printf("The average of a ,b and c is %f", average(a, b, c));
    
    return 0;
}