#include <stdio.h>
// Omar Tarek 20250681
int main()
{
    printf("Enter your information:\n");
    printf("Name:\n");
    char name[20];
    scanf("%s", &name);
    int ID;
    printf("ID:\n");
    scanf("%d", &ID);
    int grade;
    printf("Grade:\n");
    scanf("%d", &grade);
    FILE *studentInfo = fopen("student-info.txt", "a+");
    fprintf(studentInfo, "%s %d %d\n", name, ID, grade);
    rewind(studentInfo); // to go back to the beginning
    char fileContent[100];
    while (fgets(fileContent, 100, studentInfo))
    {
        printf("%s", fileContent);
    }
    fclose(studentInfo);
    return 0;
}