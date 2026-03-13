#include <stdio.h>
#include <stdlib.h>
// Omar Tarek 20250681
int main()
{
    printf("Size of array: ");
    int n;
    scanf("%d", &n);
    int arr[n];
    printf("Enter array contents:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    int maximum = arr[9], minimum = arr[0], sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int average = sum / n;
    printf("Max: %d\nMin: %d\nAverage: %d\n", maximum, minimum, average);
    return 0;
}