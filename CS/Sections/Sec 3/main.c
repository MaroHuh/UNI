#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int x = 10; // %d
    float f = 11.05;  // %f
    char c = 'A'; // %c
    double d = 111.0000005;  //%lf
    long l = 12123344;   //%ld
    long long ll = 212121233255;  //%lld

    printf("int size = %d\n", sizeof(x));
    printf("float size = %d\n", sizeof(f));
    printf("char size = %d\n", sizeof(c));
    printf("double size = %d\n", sizeof(d));
    printf("long size = %d\n", sizeof(l));
    printf("long long size = %d\n", sizeof(ll));
*/
    //------------------------------------------------------(printf variable)
    /*

        int x = 555;
        printf("%d\n",x==555);
        printf("%d\n",x==111);
        printf("\n");
        if(x==555)
        {
            printf("true");
        }
        else
        {
            printf("false");
        }
        printf("%s\n", (x == 555) ? "true" : "false");
        printf("%s\n", (x == 111) ? "true" : "false");
    */
    //--------------------------------------------------------(scanf)
    /*
        int x;
        printf("enter x : ");
        scanf("%d",&x);
        printf("the value of x = %d", x);
    */
    //---------------------------------------------------------(if condition)
    /*
        int x = 10;
        if(x == 100)
            printf("X = %d",x);
        else
            printf("X NOT equal 100");
    */
    //---------------------------------------------------------
    ///*** Sheet 3 - Question 2 ***///
    //    int length = 25, width = 60, height;
    //    if (length = 50)
    //        height = 4;
    //    else
    //        height = 8;
    //        printf ("Length = %d, Width = %d, and Height = %d.", length, width, height);
    //
    //-------------------------------------------------------------------------
    ///*** Sheet 3 - Question 3 ***///

    //    int a = 2 * 3 + 2 * (3 * 4 + 5 * 6);
    //    printf("%d\n",a);
    //
    //    int b = 8 - 4 + (6 + 9 / (3 * 2));
    //    printf("%d\n",b);
    //
    //    int c = 5 * (7 + 4 * (8 + 2)) / 6 * (9 + 3);
    //    printf("%d\n",c);
    //------------------------------------------------------------------
    ///*** Sheet 3 - Question 4 (2) ***///
    // Sum of Two Numbers: Write a C program that adds two numbers
    // provided by the user and displays their sum.
    //     int x , y , sum;
    //     printf("X = ");
    //     scanf("%d",&x);
    //     printf("Y = ");
    //     scanf("%d",&y);
    //     sum = x + y;
    //     printf("X + Y = %d", sum);
    //------------------------------------------------------------------
    ///*** Sheet 3 - Question 4 (4) ***///
    // Temperature Converter: Write a C program to convert
    // temperatures from Celsius to
    // Fahrenheit. [Equation: Celsius to Fahrenheit:
    // F = (C x 9/5) + 32.]
    //     float f , c ;
    //     printf("Temperature in Celsius = ");
    //     scanf("%f", &c);
    //     f = (c * 9/5) + 32;
    //     printf("Temperature in Fahrenheit = %f", f);
    //-------------------------------------------------------------------
    ///*** Sheet 3 - Question 4 (5) ***///
    // Swap Two Numbers (using a temporary variable):
    // Write a C program that swaps two
    // numbers provided by the user using a temporary variable
    //     int x , y , temp;
    //     printf("X = ");
    //     scanf("%d",&x);
    //     printf("Y = ");
    //     scanf("%d",&y);
    //     temp = x;
    //     x = y;
    //     y = temp;
    //     printf("X = %d\n", x);
    //     printf("Y = %d\n", y);
    //------------------------------------------------------------------
    ///*** Sheet 3 - Question 4 (6) ***///
    // Swap Two Numbers (without a temporary variable):
    // Write a C program that swaps two numbers provided by
    // the user without using a temporary variable.

    //    int x , y ;
    //    printf("X = ");
    //    scanf("%d",&x);
    //    printf("Y = ");
    //    scanf("%d",&y);
    //
    //    x = x + y;
    //    y = x - y;
    //    x = x - y;
    //
    //    printf("X = %d\n", x);
    //    printf("Y = %d\n", y);
    //-------------------------------------------------------------------
    ///*** Sheet 3 - Question 4 (7) ***///
    // Find the Maximum Number
    // Write a C program that finds the largest number among three
    // user-entered numbers without using if statements,
    // switch statements, or conditional/ternary
    // operators anywhere in the program.
    //[Hint: Use a combination of arithmetic operations and
    // logical expressions.]
    //     int x , y , z , max ;
    //     printf("X = ");
    //     scanf("%d",&x);
    //     printf("Y = ");
    //     scanf("%d",&y);
    //     printf("Z = ");
    //     scanf("%d",&z);
    //
    //     max = (x >= y) * x + (y > x) * y ;
    //
    //     max = (max >= z) * max + (z > max) * z ;
    //
    //     printf("The Maximum number is = %d" , max);

    return 0;
}
