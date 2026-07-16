#include <stdio.h>

int main()
{
    int income;
    float tax = 0;
    printf("Enter your income : \n");
    scanf("%d", &income);

    if (income <= 250000)
    {
        tax = 0;
        printf("you have to pay no tax");
    }
    else if (income <= 500000 && income > 250000)
    {
        tax = 0.05 * (income - 250000);
        printf("you have to pay 5 percent tax");
    }
    else if (income <= 1000000 && income > 500000)
    {
        tax = 0.05 * (500000 - 250000) + 0.2 * (income - 500000);
        printf("you have to pay 20 percent tax");
    }
    else if (income > 1000000)
    {
        tax = 0.05 * (500000 - 250000) + 0.2 * (1000000 - 500000) + 0.3 * (income - 1000000);
        printf("you have to pay 30 percent tax");
    }
    printf("\nThe tax to be paid is: %.2f", tax);
    return 0;
}