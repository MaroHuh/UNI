#include <stdio.h>
#include <stdlib.h>

// Omar Tarek 20250681
int main()
{
    int arr[10];
    printf("Enter Ten Numbers\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    int sumOfEven = 0, sumOfOdd = 0;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] % 2 == 0)
        {
            sumOfEven += arr[i];
        }
        else
        {
            sumOfOdd += arr[i];
        }
    }
    printf("Odd sum: %d\nEven sum: %d\n", sumOfOdd, sumOfEven);
}