#include <stdio.h>
#include <stdlib.h>
// Omar Tarek 20250681
// 5
int getTriangleArea(int base, int height)
{
    int area = 0.5 * base * height;
    return area;
}
// 6
int getLargestNumber(int Num1, int Num2, int Num3)
{
    if (Num1 >= Num2 && Num1 >= Num3)
    {
        return Num1;
    }
    else if (Num2 >= Num1 && Num2 >= Num3)
    {
        return Num2;
    }
    else
    {
        return Num3;
    }
}
// 7
int getGrade(int scoreOne, int scoreTwo, int scoreThree)
{
    int average = (scoreOne + scoreTwo + scoreThree) / 3;
    char grade;
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
    return grade;
}
// 8
void oddOrEven(int num)
{
    if (num % 2 == 0)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }
}
// 9
void compareNumbers(int num1, int num2)
{
    if (num1 > num2)
    {
        printf("%d is bigger than %d\n", num1, num2);
    }
    else if (num2 > num1)
    {
        printf("%d is bigger than %d\n", num2, num1);
    }
    else
    {
        printf("%d and %d are equal\n", num1, num2);
    }
}
// 10
void findAngleType(int angleOne, int angleTwo, int angleThree)
{
    if (angleOne == angleTwo && angleTwo == angleThree)
    {
        printf("Equilateral Triangle\n");
    }
    else if (angleOne == angleTwo || angleOne == angleThree || angleTwo == angleThree)
    {
        printf("Isocseles Triangle\n");
    }
    else
    {
        printf("Acute Triangle\n");
    }
}
// 11
int Calculate(int intOne, int intTwo, int Operation)
{
    switch (Operation)
    {
    case 1:
        return intOne + intTwo;
        break;
    case 2:
        return intOne - intTwo;
        break;
    case 3:
        return intOne * intTwo;
        break;
    case 4:
        if (intTwo == 0)
        {
            printf("Error: Division by zero\n");
            return 0;
        }
        return intOne / intTwo;
        break;
    default:
        printf("Invalid Operation. Pick from 1-4.\n");
        return 0;
    }
}
// 12
void printPatternOne()
{
    for (int i = 7; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
}
// 13
void printPatternTwo()
{
    int p = 1;
    for (int i = 1; i <= 10; i++)
    {
        for (int j = p; j > 0; j--)
        {
            printf("*");
        }
        printf("\n");
        if (i < 5)
        {
            p += 2;
        }
        else if (i > 5)
        {
            p -= 2;
        }
    }
    printf("\n");
}
// 14
int sumOfNumbers(int sumOf)
{
    int total = 0;
    for (int i = 1; i <= sumOf; i++)
    {
        total += i;
    }
    return total;
}
// 15
int sumOfDigits(int numberDigits)
{
    int r, sumOfDigits = 0;
    while (numberDigits > 0)
    {
        r = numberDigits % 10; // this is used to get the last digit in the number
        sumOfDigits += r;      // add the last digit to the sum
        numberDigits /= 10;    // divide the number by 10 to get rid of the last digit
    }
    return sumOfDigits;
}

int main()
{
    // 5
    printf("%d\n", getTriangleArea(5, 10));
    // 6
    printf("%d\n", getLargestNumber(1, 2, 3));
    // 7
    printf("%d\n", getGrade(90, 80, 95));
    // 8
    oddOrEven(5);
    // 9
    compareNumbers(10, 10);
    // 10
    findAngleType(50, 50, 25);
    // 11
    int intOne, intTwo, Operation;
    printf("Enter Two Numbers:\n");
    scanf("%d %d", &intOne, &intTwo);
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    scanf("%d", &Operation);
    printf("%d\n", Calculate(intOne, intTwo, Operation));
    // 12
    printPatternOne();
    // 13
    printPatternTwo();
    // 14
    printf("%d\n", sumOfNumbers(10));
    // 15
    printf("%d", sumOfDigits(567));
}