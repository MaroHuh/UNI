#include <stdio.h>
// Omar Tarek 20250681
typedef struct // creating the struct for employee to be able to use it in outside functions
{
    int id_no;
    int salary;
    struct
    {
        int day;
        int month;
        int year;
    } birth_date;
    int task_ids[5];
} Employee;

void addEmployee(Employee *e); // using call by reference to add employees using the function

int searchForEmployee(Employee e[], int size, int id);

int main()
{
    int size = 5;
    Employee emp[size];
    for (int i = 0; i < size; i++)
    {
        printf("Add %d Employee(s):\n", size - i);
        addEmployee(&emp[i]);
    }
    int id;
    printf("Enter ID to search for: ");
    scanf("%d", &id);
    if (searchForEmployee(emp, size, id) != -1)
    {
        printf("Employee %d's Salary: %d", id, searchForEmployee(emp, size, id));
    }
    else
    {
        printf("NOT FOUND");
    }
}

int searchForEmployee(Employee e[], int size, int id)
{
    for (int i = 0; i < size; i++)
    {
        if (e[i].id_no == id)
        {
            return e[i].salary;
        }
    }
    return -1;
}

void addEmployee(Employee *e)
{
    printf("Enter ID number: ");
    scanf("%d", &e->id_no);

    printf("Enter salary: ");
    scanf("%d", &e->salary);

    printf("Enter birth date (day month year): ");
    scanf("%d %d %d", &e->birth_date.day, &e->birth_date.month, &e->birth_date.year);

    printf("Enter 5 task IDs: ");
    for (int j = 0; j < 5; j++)
        scanf("%d", &e->task_ids[j]);
}
