#include <stdio.h>
// Omar Tarek 20250681
int main()
{
    int n;
    int triangle[20][20];

    printf("Enter the size of Pascal's triangle: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        triangle[i][0] = 1;
        triangle[i][i] = 1;

        for (int j = 1; j < i; j++)
        {
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }

    printf("\nPascal's Triangle (size = %d):\n\n", n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%2d", triangle[i][j]);
        }
        printf("\n");
    }

    return 0;
}