#include <stdio.h>
#include <stdlib.h>
// Omar Tarek 20250681
void findDifference(int *greatest, int *smallest, int *difference)
{
    *difference = *greatest - *smallest;
}

int main()
{
    int arr[10]; // create array to store the numbers
    int greatest, smallest, temp, difference;
    printf("Input 10 integers:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (arr[i] < arr[j]) // sort the array from biggest to smallest
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    int maxVal = arr[0], maxCount = 0;
    for (int i = 0; i < 10; i++)
    {
        int count = 0;
        for (int j = 0; j < 10; j++)
        {
            if (arr[i] == arr[j]) // using a counter to check how many times each number appears
            {
                count++;
            }
        }
        if (count > maxCount) // if a number appears more than all previous numbers, replace the maxCount with its' count and set it as the most repeated
        {
            maxCount = count;
            maxVal = arr[i];
        }
    }
    greatest = arr[0];
    smallest = arr[9];
    findDifference(&greatest, &smallest, &difference);
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n%d\n%d\n", difference, maxVal);
}
