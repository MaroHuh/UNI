#include <stdio.h>
// Omar Tarek 20250681
int isSorted(int arr[], int size);

int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    isSorted(arr, 10);
}

int isSorted(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            printf("Not Sorted");
            return 0;
        }
    }
    printf("Sorted");
    return 1;
}