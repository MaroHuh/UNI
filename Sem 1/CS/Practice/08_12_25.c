#include <stdio.h>

// Pointer Practice
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void power(int *a, int b)
{
    int num = *a;
    for (int i = 1; i <= b; i++)
    {
        *a *= num;
    }
}

int main()
{
    int first = 2;
    int second = 10;
    printf("Before > A: %d B: %d\n", first, second);
    swap(&first, &second);
    printf("After > A: %d B: %d\n", first, second);
    printf("%d to the power of %d\n>", first, second);
    power(&first, second);
    printf("%d", first);
}