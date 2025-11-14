#include <stdio.h>

int main(){
    int x,y,p;
    printf("1.Addition\n2.Subtraction.\n3.Multip\n4.Div\n5.Modulo\n>");
    scanf("%d",&p);
    printf("Enter the two numbers:\n");
    scanf("%d %d",&x,&y);
    switch(p){
        case 1:
        printf("%d + %d = %d",x,y, x+y);
        break;
        case 2:
        printf("%d - %d = %d", x,y,x-y);
        break;
        case 3:
        printf("%d * %d = %d", x,y,x*y);
        break;
        case 4:
        if(y>0){
            printf("%d / %d = %d", x,y,x/y);
        }
        else{
            printf("Can't divide by 0");
        }
        break;
        case 5:
        printf("%d modulo %d = %d", x, y ,x%y);
        break;
        default:
        printf("Invalid operation");
    }
}