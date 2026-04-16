#include <stdio.h>
// Omar Tarek 20250681
int findLength(char *str, int count);

int main()
{
    char str[20];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Length: %d", findLength(str, 0));
}

int findLength(char *str, int count)
{
    if (*(str + count) == '\0')
    {
        return count;
    }
    return findLength(str, ++count);
}