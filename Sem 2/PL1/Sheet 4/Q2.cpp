#include <stdio.h>
// Omar Tarek 20250681
int main()
{
    char str[10];
    printf("Enter 10 characters: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%c", &*(str + i));
    }
    for (int i = 0; i < 10; i++)
    {
        if (*(str + i) == 'z')
        {
            printf("z located at: %d", i + 1);
            return 0;
        }
    }
    printf("z not located in 10 characters");
    return 0;
}