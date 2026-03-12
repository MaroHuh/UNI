#include <stdio.h>
#include <stdlib.h>
// Omar Tarek 20250681
int main()
{
    int sum = 0, maxSum = 0, maxRow;
    int matrix[3][3];
    printf("Enter 3 by 3 matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("[%d,%d] > ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum += matrix[i][j];
        }
        if (sum > maxSum)
        {
            maxSum = sum;
            maxRow = i + 1;
        }
        sum = 0;
    }
    printf("The max row is row number %d with a sum of %d", maxRow, maxSum);
}