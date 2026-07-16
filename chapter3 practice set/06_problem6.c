#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("enter the number a :", a);
    scanf("%d", &a);
    printf("enter the number b :", b);
    scanf("%d", &b);
    printf("enter the number c :", c);
    scanf("%d", &c);
    printf("enter the number d :", d);
    scanf("%d", &d);

    if (a > b && a > c && a > d)
    {
        printf("the greatest number is :%d", a);
    }
    else if (b > a && b > c && b > d)
    {
        printf("the greatest number is :%d", b);
    }
    else if (c > a && c > b && c > d)
    {
        printf("the greatest number is :%d", c);
    }
    else
    {
        printf("the greatest number is :%d", d);
    }

    return 0;
}