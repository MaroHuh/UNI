// Omar Tarek 20250681
// A
void swap_nums(int *x, int *y)
{
    int tmp; // initializing a temp variable to temporarily store x
    tmp = *x;
    *x = *y;  // setting x to y
    *y = tmp; // setting y to x
}

void swap_pointers(char *x, char *y) // same as swap_nums but with chars
{
    char *tmp;
    tmp = x;
    x = y;
    y = tmp;
}

int main()
{
    int a, b;
    char *s1, *s2;
    a = 3;
    b = 4;
    swap_nums(&a, &b);
    printf("a is %d\n", a); // a is 4
    printf("b is %d\n", b); // b is 3
    s1 = "I should print second";
    s2 = "I should print first";
    swap_pointers(s1, s2);
    printf("s1 is %s\n", s1); // i should print first
    printf("s2 is %s\n", s2); // i should print ssecond
    return 0;
}
// B
#include <stdio.h>
int add_two(int x, int y)
{
    static int counter = 1; // static counter, value carries over between function calls
    printf("This is the function call of %d,\n",
           counter++);
    return (x + y);
}

/* the main function */
main()
{
    int i, j;
    for (i = 0, j = 5; i < 5; i++, j--)                                      // i will increase 5 times until 5, j will decrease 5 times until 0
        printf("the addition of %d and %d is %d.\n\n", i, j, add_two(i, j)); // addition always = 5
    return 0;
}
