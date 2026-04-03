#include <stdio.h>
// Omar Tarek 20250681
int main()
{
    char string[10];
    printf("Enter a string of 10 characters: ");
    scanf("%s", &string);
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == 'z')
        {
            printf("The position of the character z is %d", i + 1);
            return 0;
        }
    }
    printf("No instance of char 'z' found in '%s'", string);
    return 0;
}