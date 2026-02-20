#include <stdio.h>

int main()
{
    char name[20];
    printf("Name: ");
    scanf("%s", &name);
    printf("Hello, %s!\n", name);
    int process = 0;
    int program_continue = 1;
    float money = 0, skill = 1;
    while (program_continue != 0)
    {
        do
        {
            printf("1.Work\n2.Practice\n3.Exit\n>");
            scanf("%d", &process);
            while (getchar() != '\n')
                ;
        } while (process < 1);
        switch (process)
        {
        case 1:
            money += skill * 1.5;
            skill *= 1.25;
            printf("%s has worked and earned %.2f$, balance is now %.2f$ and proficiency is now %.2f \% \n", name, skill * 1.5, money, skill);
            break;
        case 2:
            skill *= 1.75;
            printf("%s has practiced and their proficiency is now %.2f \% \n", name, skill);
            break;
        case 3:
            printf("Goodbye, %s", name);
            program_continue = 0;
            break;
        default:
            printf("Invalid Option\n");
            break;
        }
    }
}