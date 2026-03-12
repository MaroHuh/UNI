#include <stdio.h>
#include <stdlib.h>
// Omar Tarek 20250681
int main()
{
    int numbers[10];
    printf("Enter Ten Numbers\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &numbers[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (numbers[i] > numbers[j])
            {
                int temp = numbers[j];
                numbers[j] = numbers[i];
                numbers[i] = temp;
            }
        }
    }
    int maximum = numbers[9], minimum = numbers[0], sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += numbers[i];
    }
    int average = sum / 10;
    printf("Max: %d\nMin: %d\nAverage: %d\n", maximum, minimum, average);
    return 0;
}