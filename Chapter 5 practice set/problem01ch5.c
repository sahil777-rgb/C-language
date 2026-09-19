#include <stdio.h>

void a ();
void b ();

void a () {
    printf("good morning\n");
}
void b () {
    printf("good afternoon\n");
}
int main () {
    a();
    b();
    return 0;
}