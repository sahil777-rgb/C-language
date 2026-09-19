#include <stdio.h>
float force(float mass)
{
    return mass * 9.8;
}

int main(){
    printf("The force of gravitation on the body is %0.2f", force(67.0));
    return 0;
}