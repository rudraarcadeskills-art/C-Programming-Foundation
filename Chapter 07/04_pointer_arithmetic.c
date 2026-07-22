#include <stdio.h>

int main()
{

    // pointer arithmetic using interger pointer
    // int a = 78;
    // int *ptr = &a;
    // printf("the address of a is %u\n", &a);
    // printf("the address of ptr is %u\n", ptr);
    // ptr++;
    // printf("the value of ptr is %u\n",ptr);

    // pointer arithmetic using character pointer

    char a = 78;
    char *ptr = &a;
    printf("the address of a is %u\n", &a);
    printf("the address of ptr is %u\n", ptr);
    ptr++;
    printf("the value of ptr is %u\n", ptr);

    return 0;
}