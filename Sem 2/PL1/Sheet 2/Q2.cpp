#include <stdio.h>
#include <stdlib.h>
// Omar Tarek 20250681
int main()
{
    int ascending = 1;
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > arr[i + 1] && i < 9)
        {
            ascending = 0;
        }
    }
    if (ascending == 1)
    {
        printf("Array is ascending");
    }
    else
    {
        printf("Array is not ascending");
    }
}
