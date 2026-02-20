#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*** Sheet 4 - Question 1 ***/
    /*State whether the following statement is true or false. If it is false, explain why.
    The following code should print whether a given integer is odd or even:*/
    /*
        int value;
        printf("Enter an integer number to check if it even or odd: ");
        scanf("%d",&value);
        switch( value % 2 )
        {
            case 0:
                printf( "An even integer\n" );
            case 1:
                printf( "An odd integer\n" );
        }
    */

    /*============================================================================================*/

    /*** Sheet 4 - Question 2 - Point 2 ***/
    /*Even or Odd (using a conditional/ternary operator): Write a C program that checks if a user-
    entered number is even or odd, using a conditional (ternary) operator.*/
    /*
        int num;
        printf("Enter an integer number to check if it even or odd: ");
        scanf("%d", &num);
        printf("number is %s", (num % 2 == 0) ? "even" : "odd");
    */

    //-----------------------------------------------------------------

    /*** Sheet 4 - Question 2 - Point 5 ***/
    /*Find the Maximum Number (using if�else statements):
    Write a C program that finds the largest number
    among three user-entered numbers, using if�else statements.*/
    /*
        int num1 , num2 , num3 , max;
        printf("Enter num1 : ");
        scanf("%d",&num1);
        printf("Enter num2 : ");
        scanf("%d",&num2);
        printf("Enter num3 : ");
        scanf("%d",&num3);

        max = num1;

        if(max < num2)
            max = num2;
        if(max < num3)
            max = num3;

        printf("Max number = %d", max);
    */

    //-----------------------------------------------------------------

    /*** Sheet 4 - Question 2 - Point 6 ***/
    /*Find the Maximum Number (using conditional/ternary operator):
    Write a C program that finds the largest number
    among three user-entered numbers, using a conditional (ternary) operator.*/
    /*
        int num1 , num2 , num3 , max;
        printf("Enter num1 : ");
        scanf("%d",&num1);
        printf("Enter num2 : ");
        scanf("%d",&num2);
        printf("Enter num3 : ");
        scanf("%d",&num3);

        max = num1;
        max = (max < num2)? num2 : max;
        max = (max < num3)? num3 : max;

        printf("Max number = %d", max);
    */

    //------------------------------------------------------------------
    /*** Sheet 4 - Question 2 - Point 7 ***/
    /*Simple Calculator (using if�else statements):
    Write the C code for a basic calculator program
    that can perform addition, subtraction, multiplication,
    modulo, and division.
    [Hint: Use if-else statements to perform the different operations.]*/
    /*
        int num1 , num2 , op , res;
        printf("Press 1 - To add two numbers.\n");
        printf("Press 2 - To subtract two numbers.\n");
        printf("Press 3 - To multiply two numbers.\n");
        printf("Press 4 - To divide two numbers.\n");
        printf("Press 5 - To module two numbers.\n");

        printf("Enter num1 : ");
        scanf("%d",&num1);

        printf("Enter num2 : ");
        scanf("%d",&num2);

        printf("Your Choice = ");
        scanf("%d",&op);

        if(op == 1)
        {
            res = num1 + num2;
            printf("num1 + num2 = %d",res);
        }
        else if(op == 2)
        {
            res = num1 - num2;
            printf("num1 - num2 = %d",res);
        }
        else if(op == 3)
        {
            res = num1 * num2;
            printf("num1 * num2 = %d",res);
        }
        else if(op == 4)
        {
            res = num1 / num2;
            printf("num1 / num2 = %d",res);
        }
        else if(op == 5)
        {
            res = num1 % num2;
            printf("num1 %% num2 = %d",res);
        }
        else
        {
            printf("Wrong Choice !!");
        }
    */

    //------------------------------------------------------------------

    /*** Sheet 4 - Question 2 - Point 8 ***/
    /*Simple Calculator (using a switch�case statement):
    Write the C code for a basic calculator
    program that can perform addition, subtraction, multiplication,
    modulo, and division.
    [Hint: Use a switch-case statement to
    perform the different operations.]*/

    /*
        int num1 , num2 , op , res;
        printf("Press 1 - To add two numbers.\n");
        printf("Press 2 - To subtract two numbers.\n");
        printf("Press 3 - To multiply two numbers.\n");
        printf("Press 4 - To divide two numbers.\n");
        printf("Press 5 - To module two numbers.\n");

        printf("Enter num1 : ");
        scanf("%d",&num1);

        printf("Enter num2 : ");
        scanf("%d",&num2);

        printf("Your Choice = ");
        scanf("%d",&op);

        switch(op)
        {
            case 1:
                res = num1 + num2;
                printf("num1 + num2 = %d",res);
                break;

            case 2:
                res = num1 - num2;
                printf("num1 - num2 = %d",res);
                break;

            case 3:
                res = num1 * num2;
                printf("num1 * num2 = %d",res);
                break;

            case 4:
                res = num1 / num2;
                printf("num1 / num2 = %d",res);
                break;

            case 5:
                res = num1 % num2;
                printf("num1 %% num2 = %d",res);
                break;

            default:
                printf("Wrong Choice !!");
        }
    */

    /*============================================================================================*/

    /*** Sheet 4 - Question 3 ***/
    /*Trace the following program (while trying different values
    for both variables a and b). What does this code do?*/
    /*
        unsigned short int a, b;
        printf("Please enter 2 integer values:\n");
        printf("a = "); scanf("%hu", &a);
        printf("b = "); scanf("%hu", &b);
        a = a ^ b;
        b = a ^ b;
        a = a ^ b;
        // Display updated values
        printf("Updated values:\n");
        printf("a = %d\n", a);
        printf("b = %d\n", b);
    */

    return 0;
}
