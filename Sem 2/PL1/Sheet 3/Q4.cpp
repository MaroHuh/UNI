#include <stdio.h>
// Omar Tarek 20250681
int checkFunction(char S1[], char S2[]);

int main()
{
    char S1[10], S2[10];
    scanf("%s", S1);
    scanf("%s", S2);
    printf("%d", checkFunction(S1, S2));
}

int checkFunction(char S1[], char S2[])
{
    int isPart = 0;
    for (int i = 0; S2[i] != '\0'; i++)
    {
        if (S1[0] == S2[i]) // checking for every instance of S1[0] in S2
        {
            isPart = 1;
            for (int j = 0; S1[j] != '\0'; j++)
            {
                if (S1[j] != S2[i + j]) // making sure that all of S1 is there
                {
                    isPart = 0;
                    break;
                }
            }
        }
        if (isPart == 1) // so that it doesnt find S1[0] again and undo it
        {
            return 1;
        }
    }
    return isPart;
}