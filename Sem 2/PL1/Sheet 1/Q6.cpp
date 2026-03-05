#include <stdio.h>
#include <stdlib.h>
// Omar Tarek 20250681
void reverse(char *str, int start, int end)
{
    if (start >= end)
        return;
    char temp = str[start]; // use a temp to replace start with end
    str[start] = str[end];
    str[end] = temp;
    reverse(str, start + 1, end - 1); // use recursion to move to the next character and character before last and repeat until string is reversed
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int len = 0;
    while (str[len] != '\0')
        len++;

    reverse(str, 0, len - 1);
    printf("Reversed string: %s\n", str);
    return 0;
}

// Q7) the program multiplies int a and int b using function recursion