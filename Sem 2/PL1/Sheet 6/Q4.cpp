#include <stdio.h>
// Omar Tarek 20250681
int main()
{
    int arr[5];
    printf("Enter 5 numbers: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &*(arr + i));
    }
    printf("Numbers: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", *(arr + i));
    }
}