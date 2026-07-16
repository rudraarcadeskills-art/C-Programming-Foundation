#include <stdio.h>

int main()
{
    int a = 1, b = 1;
    printf("the value of a and b is %d", a && b);
    printf("\nthe value of a or b is %d", a || b);
    printf("\nthe value of of not(a) is %d", !a);

    if (a && b)
    {
        printf("\nboth are true");
    }
    // is same as writing .........
    if (a)
    {
        if (b)
        {
            printf("\nboth are true");
        }
    }

    return 0;
}