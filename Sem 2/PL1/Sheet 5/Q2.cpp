// Omar Tarek 20250681
// // A
#include <stdio.h>
int main(void)
{
    char ch = 'c';
    char *chptr = &ch; // initializing a char pointer to the address of ch
    int i = 20;
    int *intptr = &i; // initializing an int pointer to the address of i
    float f = 1.20000;
    float *fptr = &f;            // initializing a float pointer to the address of f
    char *ptr = "I am a string"; // initializing a char pointer with a value
    printf("\n [%c], [%d], [%f], [%c], [%s]\n",
           *chptr, *intptr, *fptr, *ptr, ptr); // prints: c, 20, 1.20000, I, I am a string
    return 0;
}

// // B
// int main()
// {
//     int array[10] = {2, 5, 9, 0, 3, 7, 2};
//     int *data_ptr; // initializing an int pointer
//     int value;
//     data_ptr = &array[0];  // making the pointer point to the address of the array
//     value = *data_ptr++;   // setting value to arr[0] and setting *data_ptr to arr[1]
//     printf("%d\n", value); // printing arr[0] ( 2 )
//     value = *++data_ptr;   // setting value to arr[2] and *data_ptr to arr[2]
//     printf("%d\n", value); // printing arr[2] ( 9 )
//     value = ++*data_ptr;   // setting value and *data_ptr to arr[2] + 1
//     printf("%d\n", value); // printing arr[2] + 1
//     value = *data_ptr;     // no change because they are already equal
//     printf("%d\n", value);
// }