#include <stdio.h>
// Omar Tarek 20250681
int main()
{
    int max = 0, min, sum = 0, average;
    int arr[10];
    printf("Enter 10 numbers: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &*(arr + i));
    }
    min = *(arr);
    for (int i = 0; i < 10; i++)
    {
        if (*(arr + i) > max)
        {
            max = *(arr + i);
        }
        else if (*(arr + i) < min)
        {
            min = *(arr + i);
        }
        sum += *(arr + i);
    }
    average = sum / 10;
    printf("Max: %d\nMin: %d\nAverage: %d", max, min, average);
}