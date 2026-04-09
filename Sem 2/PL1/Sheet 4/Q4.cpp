#include <stdio.h>
// Omar Tarek 20250681
int main()
{
    int arr[10];
    int sumOdd = 0, sumEven = 0;
    printf("Enter 10 numbers: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &*(arr + i));
    }
    for (int i = 0; i < 10; i++)
    {
        if (*(arr + i) % 2 == 0)
        {
            sumEven += *(arr + i);
        }
        else
        {
            sumOdd += *(arr + i);
        }
    }
    printf("Odd sum: %d\nEven sum: %d", sumOdd, sumEven);
}