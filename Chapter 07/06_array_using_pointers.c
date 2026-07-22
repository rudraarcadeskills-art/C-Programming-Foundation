#include <stdio.h>

int main(){
    int marks[]= {12,26,48,98};
    int* ptr= &marks[0];
    // int* ptr = marks; // this is same as int* ptr= &marks[0];
    for (int i = 0; i < 4; i++)
    {
        // printf("the values at index %d is %d\n",i,marks[i]);
        printf("the values at index %d is %d\n",i,*ptr);
        ptr++;
    }
    
    return 0;
}