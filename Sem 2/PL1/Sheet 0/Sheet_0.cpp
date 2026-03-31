#include <stdio.h>
#include <stdlib.h>

// Sheet 0 - Omar Tarek 20250681
int main()
{

    // 1)
    printf("Welcome!\nYou are able to test your skill of writing C code here.");
    // 2)
    int firstInt = 10, secondInt = 15;
    float firstFloat = 12.6;
    printf("%d %d %.1f", firstInt, secondInt, firstFloat);
    // 3)
    printf("Enter three numbers.\n");
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d %d %d", c, b, a);
    // 4)
    int x, y;
    scanf("%d %d", &x, &y);
    int p = x * y;
    int s = x + y;
    int total = (s * s) + p * (s - x) * (p + y);
    printf("%d", total);
    // 5)
    float base, height;
    scanf("%f %f", &base, &height);
    int area = 0.5 * base * height;
    printf("%f", area);
    // 6) - Omar Tarek 20250681
    printf("Enter three numbers:\n");
    int Num1, Num2, Num3;
    scanf("%d %d %d", &Num1, &Num2, &Num3);
    if (Num1 >= Num2 && Num1 >= Num3)
    {
        printf("%d", Num1);
    }
    else if (Num2 >= Num1 && Num2 >= Num3)
    {
        printf("%d", Num2);
    }
    else
    {
        printf("%d", Num3);
    }
    // 7) Omar Tarek 20250681
    printf("Enter three scores:\n");
    int scoreOne, scoreTwo, scoreThree, average;
    char grade;
    scanf("%d %d %d", &scoreOne, &scoreTwo, &scoreThree);
    average = (scoreOne + scoreTwo + scoreThree) / 3;
    switch (average)
    {
    case 90 ... 100:
        grade = 'A';
        break;
    case 70 ... 89:
        grade = 'B';
        break;
    case 50 ... 69:
        grade = 'C';
        break;
    default:
        grade = 'F';
    }
    printf("Grade: %c", grade);
    // 8) Omar Tarek 20250681
    int t;
    scanf("%d", &t);
    if (t % 2 == 0)
    {
        printf("%d is even", t);
    }
    else
    {
        printf("%d is odd", t);
    }
    // 9)
    int l, m;
    scanf("%d %d", &l, &m);
    if (l > m)
    {
        printf("%d is bigger than %d", l, m);
    }
    else if (m > l)
    {
        printf("%d is bigger than %d", m, l);
    }
    else
    {
        printf("%d and %d are equal", l, m);
    }
    // 10) Omar Tarek 20250681
    int angleOne, angleTwo, angleThree;
    printf("Enter three angles:\n");
    scanf("%d %d %d", &angleOne, &angleTwo, &angleThree);
    if (angleOne == angleTwo && angleTwo == angleThree)
    {
        printf("Equilateral Triangle");
    }
    else if (angleOne == angleTwo || angleOne == angleThree || angleTwo == angleThree)
    {
        printf("Isocseles Triangle");
    }
    else
    {
        printf("Acute Triangle");
    }
    // 11) Omar Tarek 20250681
    int intOne, intTwo, Operation;
    printf("Enter Two Numbers:\n");
    scanf("%d %d", &intOne, &intTwo);
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    scanf("%d", &Operation);
    switch (Operation)
    {
    case 1:
        printf("%d + %d = %d", intOne, intTwo, intOne + intTwo);
        break;
    case 2:
        printf("%d - %d = %d", intOne, intTwo, intOne - intTwo);
        break;
    case 3:
        printf("%d x %d = %d", intOne, intTwo, intOne * intTwo);
        break;
    case 4:
        if (intTwo == 0)
        {
            printf("Can't divide by 0.");
            break;
        }
        printf("%d / %d = %d", intOne, intTwo, intOne / intTwo);
        break;
    default:
        printf("Invalid Operation. Pick from 1-4.\n");
    }

    // 12) Omar Tarek 20250681
    for (int i = 7; i > 0; i--) // this is the first loop, used to make a new line after the second loop finishes printing
    {
        for (int j = i; j > 0; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    // 13)
    int p = 1; // making a third variable to control line length
    for (int i = 1; i <= 10; i++)
    {
        for (int j = p; j > 0; j--)
        {
            printf("*");
        }
        printf("\n");
        if (i < 5) // before reaching the 5th line, p will keep being incremented by 2
        {
            p += 2;
        }
        else if (i > 5) // after the 6th line, p will be decremented by 2
        {
            p -= 2;
        }
    }
    // 14) Omar Tarek 20250681
    printf("Enter a number:\n");
    int sumOf, total = 0;
    scanf("%d", &sumOf);
    for (int i = 1; i <= sumOf; i++)
    {
        total += i;
    }
    printf("the sum of the first %d natural numbers is %d", sumOf, total);
    // 15)
    printf("Enter a number:\n");
    int numberDigits, r, sumOfDigits = 0;
    scanf("%d", &numberDigits);
    int saveNumber = numberDigits; // save the number to print it later
    while (numberDigits > 0)
    {
        r = numberDigits % 10; // this is used to get the last digit in the number
        sumOfDigits += r;      // add the last digit to the sum
        numberDigits /= 10;    // divide the number by 10 to get rid of the last digit
    }
    printf("The sum of digits of %d = %d", saveNumber, sumOfDigits);
    return 0;
}