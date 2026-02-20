#include <stdio.h>

int main(){
    int x,y,p;
    printf("1.Addition\n2.Subtraction.\n3.Multip\n4.Div\n5.Modulo\n>");
    scanf("%d", &p);
    printf("Enter the two numbers");
    scanf("%d %d", &x, &y);
    if (p == 1){
        printf("%d + %d = %d", x,y, x+y);
    }
    else if (p == 2){
        printf("%d - %d = %d", x, y, x-y);
    }
    else if (p == 3){
        printf("%d * %d = %d", x, y , x * y);
    }
    else if (p == 4){
        if(y != 0){
            printf("%d / %d = %d", x,y,x/y);
        }
        else{
            printf("Can't divide by 0");
        }
        
    }
    else if (p == 5){
        printf("%d modulo %d = %d", x, y, x%y);
    }
    else{
        printf("Invalid operation");
    }
}