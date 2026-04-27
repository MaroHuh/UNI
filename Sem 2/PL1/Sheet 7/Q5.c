#include <stdio.h>
// Omar Tarek 20250681
void replace(char *string);

int main()
{
    char string[50];
    printf("Enter a sentence:\n");
    scanf("%[^\n]", string);
    replace(string);
}

void replace(char *string)
{
    int count = 0;
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == ' ')
        {
            string[i] = '-';
            count++;
        }
    }
    printf("Spaces replaced: %d\nNew string: %s", count, string);
}