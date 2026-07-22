#include <stdio.h>

int main()
{
    int marks[90]; // this reserves the space to store 90 integers
    marks[0] = 45;
    marks[1] = 98;
    //this can go all the way to makrs[89]
    printf("the marks 0 and marks 1 are %d %d", marks[0], marks[1]);
    return 0;
}