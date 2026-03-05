#include <stdio.h>
#include <stdlib.h>
// Omar Tarek 20250681
int main()
{
    int intOne, intTwo, Operation;
    while (true)
    {
        printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit\n");
        scanf("%d", &Operation);
        if (Operation == 5)
        {
            printf("Goodbye!");
            break;
        }
        printf("Enter Two Numbers:\n");
        scanf("%d %d", &intOne, &intTwo);
        if (Operation == 1)
        {
            printf("%d + %d = %d\n", intOne, intTwo, intOne + intTwo);
        }
        else if (Operation == 2)
        {
            printf("%d - %d = %d\n", intOne, intTwo, intOne - intTwo);
        }
        else if (Operation == 3)
        {
            printf("%d x %d = %d\n", intOne, intTwo, intOne * intTwo);
        }
        else if (Operation == 4)
        {
            if (intTwo == 0)
            {
                printf("Can't divide by 0.\n");
                continue;
            }
            printf("%d / %d = %d\n", intOne, intTwo, intOne / intTwo);
        }
        else
        {
            printf("Invalid Operation.");
        }
    }
    return 0;
}