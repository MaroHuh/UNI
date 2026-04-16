#include <stdio.h>
// Omar Tarek 20250681
int main()
{
    char name[10] = "Omar";
    char *charPtr = name;
    for (int i = 0; name[i] != '\0'; i++)
    {
        printf("%c", *(charPtr + i));
    }
}