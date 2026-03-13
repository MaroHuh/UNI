#include <stdio.h>
// Omar Tarek 20250681
int main()
{
    int firstArray[20], n;
    int secondArray[20];
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter contents of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &firstArray[i]);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        secondArray[(n - 1) - i] = firstArray[i];
    }
    printf("Reversed Array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", secondArray[i]);
    }
}