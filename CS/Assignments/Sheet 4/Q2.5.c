#include <stdio.h>

int main(){
    int x,y,z;
    scanf("%d", "%d", "%d", &x, &y, &z);
    if (x > y && y > z || x > z && z > y){
        printf("Max: %d", x);
    }
    else if (y > x && x > z || y > z && z > x){
        printf("Max: %d", y);
    }
    else {
        printf("Max: %d",z);
    }
}