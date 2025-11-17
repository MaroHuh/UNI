#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*** Sheet 4 - Question 2 - Point 9 ***/
    /* Determine the Letter Grade (using a switch�case statement):
    Write the C code for a basic program that takes a mark (from 0 to 100)
    as input and provides a corresponding letter grade
    ("Excellent", "Very Good", "Good", "Pass" or "Fail" for the following ranges
    respectively: 85 to 100, 75 to 84, 65 to 74, 50 to 64, and 0 to 49).
    [Hint: Use a range in the switch-case statement]*/

    /*----------------Answer 1----------------*/
    /*
        // Answer 1 (always supported)
        int grade , range;
        printf("Enter Grade: ");
        scanf("%d",&grade);

        if (grade < 0 || grade > 100)
        {
            printf("Invalid Grade");
            return 0;
        }

        range = grade / 10;

        switch(range)
        {
            case 10: //100
            case 9: //90 - 99
                printf("Excellent Grade");
                break;

            case 8: //80 - 89
                switch (grade % 10)
                {
                    case 5: case 6: case 7: case 8: case 9: //85 - 89
                        printf("Excellent Grade");
                        break;
                    default: //80 - 84
                        printf("Very Good Grade");
                }
                break;

            case 7:
                switch (grade % 10)
                {
                    case 5: case 6: case 7: case 8: case 9:
                        printf("Very Good Grade");
                        break;
                    default:
                        printf("Good Grade");
                }
                break;

            case 6:
                switch (grade % 10)
                {
                    case 5: case 6: case 7: case 8: case 9:
                        printf("Good Grade");
                        break;
                    default:
                        printf("Pass Grade");
                }
                break;

            case 5:
                printf("Pass Grade");
                break;

            case 4:
            case 3:
            case 2:
            case 1:
            case 0:
                printf("Fail Grade");
                break;

            default :
                printf("Invalid Grade");

        }
    */

    /*----------------Answer 2----------------*/

    /*
        // Answer 2 (supported in GCC + GNU extension ONLY)
        int grade , range;
        printf("Enter Grade: ");
        scanf("%d",&grade);

        switch(grade)
        {
            case 85 ... 100:
                printf("Excellent Grade");
                break;

            case 75 ... 84:
                printf("Very Good Grade");
                break;

            case 65 ... 74:
                printf("Good Grade");
                break;

            case 50 ... 64:
                printf("Pass Grade");
                break;

            case 0 ... 49:
                printf("Fail Grade");
                break;

            default :
                printf("Invalid Grade");

        }
    */

    /*============================================================================================*/

    /*** Sheet 5 - Question 1 ***/
    /*Write a C program that uses a �for� loop to display numbers from 1 to 10.*/

    /*
        for(int i = 1 ; i <= 10 ; i ++)
        {
            printf("%d ",i);
        }
    */

    //-----------------------------------------------------------------------

    /*** Sheet 5 - Question 2 ***/
    /*Create a C program that utilises a �while� loop to print even numbers
    from 2 to 20*/

    /*
        int i = 2;
        while(i <= 20)
        {
            printf("%d ",i);
            i +=  2;
        }
    */

    //-----------------------------------------------------------------------

    /*** Sheet 5 - Question 3 ***/
    /*Develop a C program with a �do while� loop to calculate
    the sum of numbers from 1 to 50*/

    /*
        int i = 1 , sum = 0;
        do
        {
            sum = sum + i;
            i++;
        }while(i <= 50);

        printf("Sum = %d",sum);
    */

    //-----------------------------------------------------------------------

    /*** Sheet 5 - Question 4 ***/
    /*Write a C program using a �for� loop to
    find the factorial of a given number*/

    /*
        int factorial = 1 , num;
        printf("Enter Num to get Factorial: ");
        scanf("%d",&num);
        for(int i = 1 ; i <= num ; i++) //we can start i = 2 direct as 1 is counted in factorial value first
            factorial = factorial * i;
        printf("Factorial of %d = %d", num, factorial);
    */

    //-----------------------------------------------------------------------

    /*** Sheet 5 - Question 7 ***/
    /*Write a C program that uses a �for� loop to
    print the multiplication table of a given number*/

    /*
        int num;
        printf("Enter a number to get it's Multiplication Table: ");
        scanf("%d",&num);
        for(int i = 1 ; i <= 12 ; i++)
        {
            printf("%d x %d = %d\n", num , i , num * i);
        }
    */

    //-----------------------------------------------------------------------

    /*** Sheet 5 - Question 8 ***/
    /*Create a C program using a �while� loop to display
    the prime numbers between 1 and 50*/

    /*
        int num = 2; // we should check numbers from 1 to 50, we exclude 1 and start num from 2 (1 is not a prime)
        int isPrime; // variable with which we check if specific number is prime or not and store 1 (true) or 0 (false) for each num
        printf("Prime Numbers from 1 to 50 are:\n");

        // loop through all numbers from 2 to 50
        while(num <= 50)
        {
            isPrime = 1; // assume the number is prime at the start

            // check divisors from 2 up to sqrt(num)
            // if any number divides 'num', it is NOT prime
            for(int i = 2 ; i <= sqrt(num) ; i++) // prime number check logic
            {
                if(num % i == 0) // if num is divisible by i, it is not prime
                {
                    isPrime = 0; // Mark as not prime
                    break; // stop checking in that number as we knew it's not prime
                }
            }

            // after checking, if isPrime is still 1 then number is prime and print it
            if(isPrime == 1)
                printf("%d ", num);

            num ++; // move to the next number (2 - 50)
        }
        printf("\n");

    */

    return 0;
}
