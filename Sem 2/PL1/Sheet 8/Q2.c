#include <stdio.h>
// Omar Tarek 20250681
int main()
{
    FILE *input = fopen("binary.bin", "r");
    FILE *output = fopen("binary-2.bin", "w");

    char c;

    while (fread(&c, 1, 1, input))
    {
        if (c >= 32 && c <= 127)
        {
            fputc(c, output);
        }
    }
    fclose(input);
    fclose(output);
    return 0;
}