#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
void randnum()
{
    srand(time(NULL));
    int num = rand() % 100 + 1;
    int guess;
    while (1)
    {
        printf("Guess the number\n> ");
        scanf("%d", &guess);
        if (guess == num)
        {
            printf("Correct! The number was %d\n", num);
            break;
        }
        else if (num > guess)
        {
            printf("Too small.\n");
            continue;
        }
        else
        {

            printf("Too big.\n");
            continue;
        }
    }
}
    */

int main()
{
    int a = 10;    // 00001010
    int b = 5;     // 00000101
    int z = a & b; // 00000000
    int m = 10 << 1;
    int n = 10 >> 1;
    printf("%d", n);
}