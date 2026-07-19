#include <stdio.h>


int sum (int , int);
int sum(int a , int b){
    a = 6; // sum function should not change x using a because copy of a is provided to sum in a 
    return a + b;
}
int main(){
    int x = 1 , y = 32;
    printf("sum of x and y is %d\n", sum(x,y));

    return 0;
}