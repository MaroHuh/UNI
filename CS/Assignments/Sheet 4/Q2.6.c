#include <stdio.h>

int main(){
    int x,y,z;
    scanf("%d %d %d", &x, &y, &z);
    (x >= y) && (x >= z) ? printf("Max: %d",x)
    : (y >= x) && (y >= z) ? printf("Max: %d", y)
    : printf("Max: %d", z);
}