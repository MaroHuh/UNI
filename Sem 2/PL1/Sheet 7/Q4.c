#include <stdio.h>
// Omar Tarek 20250681
void calcMean(int arr[], int size);
void calcMedian(int arr[], int size);
void calcMode(int arr[], int size);

int main()
{
    int n;
    printf("Enter array size:\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter integer array of size n:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    while (1)
    {
        int action;
        printf("What would you like to calculate?\nMode: 1\nMedian: 2\nMean: 3\nExit: 0\n");
        scanf("%d", &action);
        switch (action)
        {
        case 1:
            calcMode(arr, n);
            break;
        case 2:
            calcMedian(arr, n);
            break;
        case 3:
            calcMean(arr, n);
            break;
        case 0:
            return 0;
        default:
            printf("Invalid.\n");
        }
    }
}

void calcMean(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    printf("%d\n", sum / size);
}
void calcMedian(int arr[], int size)
{
    if (size % 2 == 0)
    {
        printf("%d, %d\n", arr[(size / 2) - 1], arr[(size / 2)]);
    }
    else
    {
        printf("%d\n", arr[((size + 1) / 2) - 1]);
    }
}
void calcMode(int arr[], int size)
{
    int mode = arr[0];
    int modeCount = 0;
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j] && i != j)
            {
                count++;
            }
        }
        if (count > modeCount)
        {
            modeCount = count;
            mode = arr[i];
            count = 0;
        }
    }
    if (modeCount == 0)
    {
        printf("No mode found.\n");
    }
    else
    {
        printf("%d\n", mode);
    }
}