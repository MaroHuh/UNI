#include <stdio.h>
// Omar Tarek 20250681
int main()
{
    FILE *fptr = fopen("file.txt", "w");
    for (int x = 1; x <= 10; x++)
    {
        fprintf(fptr, "%d , %d\n", x, x * x);
    }
    fclose(fptr);
}