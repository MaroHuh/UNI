#include <stdio.h>

int main(){
    int mark;
    scanf("%d",&mark);
    switch(mark){
        case 0 ... 49:
        printf("Fail");
        break;
        case 50 ... 64:
        printf("Pass");
        break;
        case 65 ... 74:
        printf("Good");
        break;
        case 75 ... 84:
        printf("Very Good");
        break;
        case 85 ... 100:
        printf("Excellent");
        break;
        default:
        printf("Invalid Grade");
    }
}