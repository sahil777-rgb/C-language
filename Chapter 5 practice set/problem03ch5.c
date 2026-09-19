#include <stdio.h>
float c2f(float c){
    return (c * 9.0 / 5.0) + 32.0;
}


int main(){
    printf("The temperature in Fahrenheit is %f", c2f(37.0));
    
    return 0;
}