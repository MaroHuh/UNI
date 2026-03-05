#include <stdio.h>
#include <stdlib.h>
// Omar Tarek 20250681
int isPrime(int num, int i)
{
    if (i == 1)
    {
        return 1; // didnt find any divisors, so the number is prime
    }
    if (num % i == 0)
    {
        return 0; // found a divisor, the number isn't prime
    }
    return isPrime(num, i - 1); // check for divisors from num/2 to 1
}
int main()
{
    printf("Enter a number\n");
    int num;
    scanf("%d", &num);
    if (num <= 1)
    {
        printf("%d is not prime\n", num);
    }
    else if (isPrime(num, num / 2))
    {
        printf("%d is prime", num);
    }
    else
    {
        printf("%d is not prime", num);
    }
    return 0;
}
