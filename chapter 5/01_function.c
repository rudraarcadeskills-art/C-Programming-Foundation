#include <stdio.h>

// function prototype
int sum(int, int);

// fucntion definition
int sum(int x, int y)
{
   // printf("the sum is %d\n", x + y);
    return x + y;
}
int main()
{
    int a = 1;
    int b = 2;

    // int c = a + b ;
    // printf("the sum is : %d\n",c);
    int c = sum(a, b); // fuction call
    printf("the sum is %d\n", c);

    int a1 = 67;
    int b1 = 56;

    // int c1 = a1 + b1 ;
    // printf("the sum is : %d\n",c1);

    int c1 = sum(a1, b1); // function call 
    printf("the sum is %d\n", c1);

    int a2 = 178;
    int b2 = 209;

    // int c2 = a2 + b2 ;
    // printf("the sum is : %d\n",c2);
    int c2 = sum(a2, b2); // function call
    printf("the sum is %d\n", c2);


    return 0;
}