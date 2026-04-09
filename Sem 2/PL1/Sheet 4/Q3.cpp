#include <stdio.h>
// Omar Tarek 20250681
int checkAscending(int *a, int size);

int main()
{
    int n;
    printf("Array size: ");
    int arr[n];
    printf("Enter Array: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &*(arr + i));
    }
    checkAscending(arr, n);
}

int checkAscending(int *a, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (*(a + i) > *(a + i + 1) && i != (size - 1) || i == (size - 1) && *(a + i) < *(a + i - 1))
        {
            printf("Not Ascending");
            return 0;
        }
    }
    printf("Ascending");
    return 1;
}