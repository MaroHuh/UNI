#include <stdio.h>
#include <stdlib.h>
// Omar Tarek 20250681
int main()
{
    int arr[10];
    printf("Enter Ten Numbers\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &*(arr + i));
    }
    int increasing = 0, decreasing = 0;
    for (int i = 0; i < 10; i++)
    {
        if (*(arr + i) > *(arr + i + 1) && i != 9) // checking if they are increasing or decreasing and storing them as 1 if true, 0 if false
        {
            decreasing = 1;
        }
        else if (*(arr + i) < *(arr + i + 1) && i != 9)
        {
            increasing = 1;
        }
    }
    if (increasing == 1 && decreasing == 0) // checking whether increasing or decreasing or both or neither are true
    {
        printf("the numbers in the array are increasing");
    }
    else if (increasing == 0 && decreasing == 1)
    {
        printf("the numbers in the array are decreasing");
    }
    else if (increasing == 0 && decreasing == 0)
    {
        printf("the numbers in the array are not changing");
    }
    else if (increasing == 1 && decreasing == 1)
    {
        printf("the numbers in the array are increasing and then decreasing");
    }
}