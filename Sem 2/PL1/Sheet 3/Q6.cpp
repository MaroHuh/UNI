#include <stdio.h>
#include <string.h>
// Omar Tarek 20250681
void replace(char *s, int length);

int main()
{
    char s[20];
    printf("Enter a sentence: ");
    scanf("%[^\n]", &s); // %[^\n] so that it reads the full line
    int length = strlen(s);
    replace(s, length);
    printf("New sentence: %s", s);
}

void replace(char *s, int length)
{
    for (int i = 0; i < length; i++)
    {
        if (s[i] == ' ')
        {
            s[i] = '-';
        }
    }
}