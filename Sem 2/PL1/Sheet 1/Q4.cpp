#include <stdio.h>
#include <stdlib.h>
// Omar Tarek 20250681
int sumOf(int a);

int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);
    printf("Sum of first %d integers is %d", num, sumOf(num));
}

int sumOf(int a)
{
    if (a == 0)
    {
        return a; // avoid infinite recursion
    }
    return a + sumOf(a - 1);
}