#include <stdio.h>
// Omar Tarek 20250681
typedef struct
{
    char name[20];
    int age;
    union
    {
        char state[20];
        char country[20];
    } Residence;
} Citizen;
int main()
{
    printf("Enter your name and age: \n");
    Citizen newCitizen;
    scanf("%s", &newCitizen.name);
    scanf("%d", &newCitizen.age);
    printf("Are you a US citizen?\n1 ---> Yes\n2 ---> No\n");
    int Answer;
    scanf("%d", &Answer);
    if (Answer == 1)
    {
        printf("Enter your state: ");
        scanf("%s", &newCitizen.Residence.state);
    }
    else if (Answer == 2)
    {
        printf("Enter your country: ");
        scanf("%s", &newCitizen.Residence.country);
    }
    else
    {
        printf("Invalid Answer. (1 for Yes / 2 for No)");
        return 0;
    }
}