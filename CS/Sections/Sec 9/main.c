#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to check if a number is prime Question 11
int isPrime(int n)
{
    if (n <= 1)
        return 0; // Not prime

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0; // Not prime
    }

    return 1; // Prime
}

void printNumsRecursion(int n)
{

    ///----- this is looped version

    while (n > 0)
    {
        printf("%d\n", n);
        n--;
    }

    ///----- this is recursive version
    /*
    if(n<=0)
        return;
    printf("%d\n",n);
    printNumsRecursion(n-1);
    */
}

// Function to print Fibonacci sequence using loop Question 19
void FibonacciLoop(int n)
{
    int first = 0, second = 1, nextTerm;
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", first);
        nextTerm = first + second;
        first = second;
        second = nextTerm;
    }
}

// Function to print Fibonacci sequence using recursion Question 19
int FibonacciRecursion(int n)
{

    if (n == 0)
        return;
    static int first = 0, second = 1, nextTerm;
    printf("%d ", first);
    nextTerm = first + second;
    first = second;
    second = nextTerm;

    FibonacciRecursion(n - 1);
}

int main()
{

    /*** Sheet 5 - Question 16 ***/
    /*Create a C program using a �while� loop to
    implement a guessing game. The program should
    generate a random number, and the user has to guess it*/

    /*
        int guess , count = 0;
        srand(time(NULL));
    //    printf("%d\n",time(NULL));
        int num = rand() % 100 + 1;
    //    printf("%d\n",rand());
    //    printf("%d", num);

        while(1)
        {
            printf("Enter your guess (between 1 and 100): ");
            scanf("%d",&guess);
            count ++;
            if(guess == num)
            {
                printf("Congratulations! You guessed the correct number (%d) in %d attempts.\n",num,count);
                break;
            }
            else if(guess < num)
            {
                printf("Too Low\n");
            }
            else
            {
                printf("Too High\n");
            }
        }
    */

    /*============================================================================================*/

    /*** Sheet 6 - Question 11 ***/
    /*Write a C program that defines a function �isPrime� to check if a given number is prime. The
    function should accept one integer argument and return a Boolean value*/

    /*
        int num;

        printf("Enter a number: ");
        scanf("%d", &num);

        if (isPrime(num))
            printf("%d is a prime number.\n", num);
        else
            printf("%d is NOT a prime number.\n", num);
    */

    /**=============================================(Recursion)=============================================**/

    // printNumsRecursion(1000);

    /*============================================================================================*/

    /*** Sheet 6 - Question 19 ***/
    /*Write a C program that defines a function �fibonacci�
    to generate the first N terms of the Fibonacci sequence using recursion.
    The function should accept one integer argument (N) and print the sequence.*/

    /*
        int n;
        printf("Enter number of terms: ");
        scanf("%d",&n);
        printf("Fibonacci Series: ");

        ///-----Fibonacci Sequence Code
        // FibonacciLoop(n);


        ///-----Fibonacci Sequence Recursion Function
        // FibonacciRecursion(n);
    */

    return 0;
}
