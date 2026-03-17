#include <stdio.h>

int main()
{
    enum status
    {
        target, // 0
        fail,   // 1
        absent, // 2
        pass    // 3
    };
    enum status stud1, stud2, stud3, stud4;
    stud1 = target;
    stud2 = fail;
    stud3 = absent;
    stud4 = pass;
    printf("%d %d %d %d\n", stud1, stud2, stud3, stud4);
    return 0;
}