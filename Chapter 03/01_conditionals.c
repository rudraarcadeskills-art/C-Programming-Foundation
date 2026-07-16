#include <stdio.h>

int main()
{
    int age = 15;

    if (age > 10)
    {
        printf("we are inside if");
        printf("\nyour age is greater than 10");
    }
    if (age % 5 == 0)
    {
        printf("\nwe are inside another if");
        printf("\nyour age is a multiple of 5");
    }
    return 0;
}