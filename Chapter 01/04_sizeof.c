#include <stdio.h>

int main() {
    int myNumber = 100;      // Integer number
    char myLetter = 'A';     // Single character
    double myDecimal = 9.99; // Bada decimal number

    // sizeof() ka use karke bytes check karna
    // %zu ka use sizeof ke result ko print karne ke liye hota hai
    printf("Integer le raha hai: %zu bytes\n", sizeof(myNumber));
    printf("Character le raha hai: %zu bytes\n", sizeof(myLetter));
    printf("Double le raha hai: %zu bytes\n", sizeof(myDecimal));

    return 0;
}