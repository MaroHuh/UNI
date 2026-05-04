#include <stdio.h>
#include <string.h>
// Omar Tarek 20250681
int main()
{
    FILE *fptr1;
    fptr1 = fopen("file-1.txt", "r");
    char contentFileOne[1000];
    fgets(contentFileOne, 1000, fptr1);

    FILE *fptr2;
    fptr2 = fopen("file-2.txt", "r");
    char contentFileTwo[1000];
    fgets(contentFileTwo, 1000, fptr2);

    if (strcmp(contentFileOne, contentFileTwo))
    {
        printf("Files are different.\n");
    }
    else
    {
        printf("Files are identical.\n");
    }

    return 0;
}