#include <stdio.h>
// Omar Tarek 20250681
int main()
{
    char s1[50] = "Hello,"; // the first string has to have extra space for the second string
    char s2[] = " World!";
    int i = 0;
    for (i; s1[i] != '\0'; i++) // this is to find the end of the first tring
        ;
    for (int j = 0; s2[j] != '\0'; j++)
    {
        s1[i] = s2[j];
        i++;
    }
    s1[i] = '\0';
    printf("Concatenated String: %s", s1);
    return 0;
}