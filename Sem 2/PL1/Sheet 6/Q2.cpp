#include <stdio.h>
// Omar Tarek 20250681
int main()
{
    char name[10] = "Omar";
    char *charPtr;
    charPtr = name;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *arrPtr;
    arrPtr = arr;
    printf("%d\n", *arrPtr);
    printf("%s\n", charPtr);
    for (int i = 0; name[i] != '\0'; i++)
    {
        printf("%c", *(charPtr + i));
    }
}