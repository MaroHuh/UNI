#include <stdio.h>
// Omar Tarek 20250681
int findGreatestItem(int *arr, int n);

int main()
{
    int arr[8];
    printf("Enter 8 numbers: ");
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Greatest Number: %d", findGreatestItem(arr, 8));
}

int findGreatestItem(int *arr, int n)
{
    int greatest = *arr;
    for (int i = 0; i < 8; i++)
    {
        if (greatest < *(arr + i))
        {
            greatest = *(arr + i);
        }
    }
    return greatest;
}