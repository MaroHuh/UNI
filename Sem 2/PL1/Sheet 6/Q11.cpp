#include <stdio.h>
// Omar Tarek 20250681
typedef struct
{
    char firstName[20];
    char lastName[20];
    char gender;
    struct
    {
        int day;
        int month;
        int year;
    } birthDate;
    double height;
    double weight;
} HealthProfile;

void CreateHealthProfile(HealthProfile *member, int *ageInYears, double *BMI);

int main()
{
    int ageInYears;
    double BMI;
    HealthProfile newMember;
    CreateHealthProfile(&newMember, &ageInYears, &BMI);
    printf("Your Profile\n");
    printf("Name: %s %s\n", newMember.firstName, newMember.lastName);
    printf("Gender: %c\n", newMember.gender);
    printf("Birthdate: %d/%d/%d\n", newMember.birthDate.day, newMember.birthDate.month, newMember.birthDate.year);
    printf("Age in years: %d\n", ageInYears);
    printf("Height: %lf\n", newMember.height);
    printf("Weight: %lf\n", newMember.weight);
    printf("BMI: %lf\n", BMI);
}

void CreateHealthProfile(HealthProfile *member, int *ageInYears, double *BMI)
{
    printf("Enter first name:\n");
    scanf("%s", &member->firstName);
    printf("Enter last name:\n");
    scanf("%s", &member->lastName);
    printf("Enter your gender (M / F):\n");
    scanf(" %c", &member->gender);
    printf("Enter your Birthdate (D/MM/YYYY):\n");
    scanf("%d %d %d", &member->birthDate.day, &member->birthDate.month, &member->birthDate.year);
    printf("Enter your height:\n");
    scanf("%lf", &member->height);
    printf("Enter your weight:\n");
    scanf("%lf", &member->weight);

    *BMI = member->weight / (member->height * member->height);
    *ageInYears = 2026 - member->birthDate.year;
}