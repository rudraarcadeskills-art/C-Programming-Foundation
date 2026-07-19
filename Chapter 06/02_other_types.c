#include <stdio.h>

// * this tells what is the value 
// & this tells us the address

int main()
{
    char i = 'A';

    
    char* j = &i; // j is a pointer pointing to i ( j is an character pointer)

    float k = 56.3;
    float* k1 = &k; // k is a pointer pointing to k ( k is an float pointer)
    printf("the address of i is %p\n", &i);
    printf("the address of i is %p\n", j);
    printf("the address of k is %p\n", &k);

    printf("the value at address j is %d\n", *(&i));
    return 0;
}