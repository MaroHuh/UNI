#include <stdio.h>

int minimum(int *a, int size)
{
    int min = a[0];
    for (int i = 1; i < size; i++)
        if (a[i] < min)
            min = a[i];

    return min;
}

int main()
{
    // typedef struct
    // {
    //     char name[50];
    //     int age;
    //     float gpa;

    // } Student;

    // enum Age
    // {
    //     Adult = 18,
    //     Teen = 13,
    //     Child = 6
    // };

    // Student firstStudent = {"Omar", 19, 3.4};
    // printf("Name: %s\nAge: %d\nGPA: %.2f", firstStudent.name, firstStudent.age, firstStudent.gpa);
    int a = 5;
    int arr[] = {1, 2, 3, 4, 5};
    printf("%d , %d", minimum(arr, a));
}