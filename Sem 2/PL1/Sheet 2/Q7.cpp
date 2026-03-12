#include <stdio.h>
#include <stdlib.h>
// Omar Tarek 20250681
int main()
{
    int matrix[5][5] = {
        {0, 1, 1, 1, 1},
        {-1, 0, 1, 1, 1},
        {-1, -1, 0, 1, 1},
        {-1, -1, -1, 0, 1},
        {-1, -1, -1, -1, 0}};

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d  ", matrix[i][j]);
        }
        printf("\n");
    }
}