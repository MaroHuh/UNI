#include <stdio.h>
// Omar Tarek 20250681
int findNumberOfChar(char S1[], char c);

int main()
{
    char c, S1[20];
    printf("Enter a string (max 20 characters): ");
    scanf("%s", &S1);
    printf("Enter target character: ");
    scanf(" %c", &c);
    printf("'%c' appears %d times in '%s'", c, findNumberOfChar(S1, c), S1);
}

int findNumberOfChar(char s[], char c)
{
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == c)
        {
            count++;
        }
    }
    return count;
}