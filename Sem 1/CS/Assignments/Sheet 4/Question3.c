#include <stdio.h>

int main(){
    unsigned short int a,b;
    scanf("%hu",&a);
    scanf("%hu",&b);
    a = a^b;
    b = a^b;
    a = a^b;
    printf("a: %d b: %d",a,b);
}

// switch 2 numbers