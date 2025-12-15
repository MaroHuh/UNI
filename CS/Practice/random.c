#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
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
        else
        {

            printf("Incorrect.\n");
            continue;
        }
    }
}