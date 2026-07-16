#include <stdio.h>

int main()
{
    int a;
    printf("enter a:");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("you entered 1");
        break;
    case 2:
        printf("you entered 2");
        break;
    case 3:
        printf("you entered 3");
        break;
    default:
        printf("you entered something else");
    }
    return 0;
}