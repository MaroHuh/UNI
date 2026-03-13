#include <stdio.h>
int main()
{ // Omar Tarek 20250681
    int n;
    printf("Size of array: ");
    scanf("%d", &n);
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter Pos [%d][%d]\n", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == 0)
            {
                counter++;
            }
        }
    }
    if (counter > (n * n) / 2)
    {
        printf("Matrix is sparse");
    }
    else
    {
        printf("Matrix is not sparse");
    }
}