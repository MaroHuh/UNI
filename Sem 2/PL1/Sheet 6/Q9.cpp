#include <stdio.h>
// Omar Tarek 20250681
int findDigits(char *str, int count);
int main()
{
    char str[20];
    printf("Enter a string: ");
    scanf("%s", str);
    if (findDigits(str, 0))
    {
        printf("There are digits in the string.");
        return 0;
    }
    else
    {
        printf("There are no digits in the string.");
        return 0;
    }
}

int findDigits(char *str, int count)
{
    if (*(str + count) == '\0')
    {
        return 0;
    }
    if (*(str + count) == '1' || *(str + count) == '2' || *(str + count) == '3' || *(str + count) == '4' || *(str + count) == '5' || *(str + count) == '6' || *(str + count) == '7' || *(str + count) == '8' || *(str + count) == '9' || *(str + count) == '0')
    {
        return 1;
    }
    return findDigits(str, ++count);
}