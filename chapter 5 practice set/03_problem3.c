#include <stdio.h>

    float force(float);

float force(float mass)
{
    return (mass * 9.8);
}

int main()
{
    float mass = 958.0;
    printf("the force for mass m is %.2f\n", force(mass));
    return 0;
}