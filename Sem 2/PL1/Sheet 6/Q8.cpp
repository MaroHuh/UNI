#include <stdio.h>
// Omar Tarek 20250681
int findSpaces(char *str, int count, int spaces);

int main()
{
    char str[20];
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    printf("Spaces: %d", findSpaces(str, 0, 0));
}

int findSpaces(char *str, int count, int spaces)
{
    if (*(str + count) == '\0')
    {
        return spaces;
    }
    if (*(str + count) == ' ')
    {
        spaces++;
    }
    return findSpaces(str, ++count, spaces);
}