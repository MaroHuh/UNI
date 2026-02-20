// True or false: even or odd code
#include <stdio.h>
int main(){
    int value;
    scanf("%d", &value);
    switch(value % 2){
        case 0:
            printf("Even\n");
        case 1:
            printf("Odd\n");
    }
}
/* False: in case of Odd number it correctly returns case 1 only, but in case of
even number it returns both case 0 and case 1 due to the absence of break statements */