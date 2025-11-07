#include <stdio.h>
#include <stdlib.h>

int main()
{

    ///*** Question 1: Check if a Number is Even or Odd using Constant ***///
    // Write a C program that takes an integer input from the user and checks whether it is even or odd.
    // Use a const int variable to store the value 2.

    /*
        int num;
        const int DIVISOR = 2;  // constant variable

        printf("Enter an integer number to check if it even or odd: ");
        scanf("%d", &num);

        if (num % DIVISOR == 0) {
            printf("%d is even.\n", num);
        } else {
            printf("%d is odd.\n", num);
        }
    */

    /*-----------------------------------------------------------------------------------------------*/

    ///*** Question 2: Vowel or Consonant Checker ***///
    // Write a C program that reads a single character from the user and checks whether it is a vowel or a consonant.
    // If the user enters a non-alphabetic character, display an error message.

    /*
        char ch;

        printf("Enter a character: ");
        scanf("%c", &ch);

        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' ||
                ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' ||
                ch == 'u' || ch == 'U') {
                printf("'%c' is a vowel.\n", ch);
            } else {
                printf("'%c' is a consonant.\n", ch);
            }
        } else {
            printf("Error: '%c' is not a letter.\n", ch);
        }
    */

    return 0;
}
