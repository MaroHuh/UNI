#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};
    int num, located = 0, pos1, pos2;
    printf("Enter Number:\n");
    scanf("%d", &num);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (matrix[i][j] == num)
            {
                located = 1;
                pos1 = i + 1;
                pos2 = j + 1;
            }
        }
    }
    if (located == 1)
    {
        printf("Number: %d\nFound in matrix at position [%d,%d]", num, pos1, pos2);
    }
}