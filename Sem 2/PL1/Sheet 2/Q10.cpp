#include <stdio.h>
// Omar Tarek 20250681
int main()
{
    printf("Enter number of students: ");
    int numberOfStudents;
    scanf("%d", &numberOfStudents);
    int studentGrades[numberOfStudents][5];
    int studentAverage[numberOfStudents];
    int sum;
    for (int i = 0; i < numberOfStudents; i++)
    {
        sum = 0;
        for (int j = 0; j < 5; j++)
        {
            printf("Enter Student [%d] Grade [%d]:\n", i + 1, j + 1);
            scanf("%d", &studentGrades[i][j]);
            sum += studentGrades[i][j];
        }
        studentAverage[i] = sum / 5;
    }
    printf("Students' Average Grades:\n");
    for (int i = 0; i < numberOfStudents; i++)
    {
        printf("Student [%d]: %d\n", i + 1, studentAverage[i]);
    }
}