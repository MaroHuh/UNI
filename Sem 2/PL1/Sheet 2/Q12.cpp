#include <stdio.h>
int main()
{ // Omar Tarek 20250681
    int rows, columns;
    printf("Number of rows: ");
    scanf("%d", &rows);
    printf("Number of columns: ");
    scanf("%d", &columns);
    int matrix[rows][columns];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("Enter Pos [%d][%d]\n", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
    int transpose[columns][rows];
    for (int i = 0; i < columns; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            transpose[i][j] = matrix[j][i];
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (matrix[i][j] != transpose[i][j])
            {
                printf("Matrix is not Symmetric");
                return 0;
            }
        }
    }
    printf("Matrix is Symmetric");
    return 0;
}
