#include <stdio.h>
#include <string.h>
// Omar Tarek 20250681
void reverseString(char *s, int length, int size);

int main()
{
    int size = 20;
    char s[size];
    printf("Enter a string: ");
    scanf("%s", &s);
    printf("%s ---> ", s);
    int length = strlen(s);
    reverseString(s, length, size);
    printf("%s", s);
}

void reverseString(char *s, int length, int size)
{
    char original[size]; // save the original string in a separate one to use it later
    for (int i = 0; i < length; i++)
    {
        original[i] = s[i];
    }
    for (int i = 0; i < length; i++)
    {
        s[i] = original[length - i - 1]; // go backwards from the saved string to reverse the original string
    }
}