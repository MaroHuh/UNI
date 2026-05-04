#include <stdio.h>
// Omar Tarek 20250681
int main()
{
    FILE *fptr1 = fopen("file.txt", "r");
    FILE *fptr2 = fopen("filte-2.txt", "w");
    char s[1000];
    while (fgets(s, 1000, fptr1))
    {
        int empty = 1;
        for (int i = 0; s[i] != '\0'; i++) // checking all of the lines
        {
            if (s[i] != '\n') // if its not a newline, adds it to the output file
            {
                empty = 0;
                break;
            }
        }
        if (!empty)
        {
            fputs(s, fptr2);
        }
    }
    fclose(fptr1);
    fclose(fptr2);
}