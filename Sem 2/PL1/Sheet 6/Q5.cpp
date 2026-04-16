#include <stdio.h>
// Omar Tarek 20250681
int main()
{
    int arr[5], sum = 0;
    int *sumPtr = &sum;
    printf("Enter 5 numbers: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &*(arr + i));
    }
    for (int i = 0; i < 5; i++)
    {
        *sumPtr += *(arr + i);
    }
    printf("Sum: %d", *sumPtr);
}