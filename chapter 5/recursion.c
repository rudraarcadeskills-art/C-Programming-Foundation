#include <stdio.h>

int factorial(int);

// factorial(5) = 1 x 2 x 3 x 4 x 5
// factorial(4) = 1 x 2 x 3 x 4
// factorial(3) = 1 x 2 x 3
// factorial(2) = 1 x 2
// factorial(n) = 1 x 2 x 3 x ... x n-1 x n
// factorial(n-1) = 1 x 2 x 3 x ... x (n-1)

int factorial(int n)
{
    if (n == 0 || n == 1)  // base condition 
    {
        return 1;
    }
    // factorial(n) - factorial(n-1) x n
    return factorial(n - 1) * n;
}

int main()
{

    int n = 11;
    printf("the factorial of %d is %d\n", n, factorial(n));

    return 0;
}