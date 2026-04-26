#include <stdio.h>
// Omar Tarek 20250681
int findLength(char *str);

int main()
{
    char str[20];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Length: %d", findLength(str));
}

int findLength(char *str)
{
    static int count = 0;
    if (*(str + count) == '\0')
    {
        return count;
    }
    count++;
    return findLength(str);
}