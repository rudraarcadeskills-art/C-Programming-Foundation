#include <stdio.h>

int main()
{
    int n;
    printf("enter the number : ", n);
    scanf("%d", &n);

    for (int i = 10; i; i--)
    {
        printf("\n%d X %d = %d", n, i, n * i);
    }

    return 0;
}