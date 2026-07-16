#include <stdio.h>

float average(int a , int b , int c);

float average(int a , int b , int c){
    return(a + b + c )/ 3.0;
}

int main(){
    printf("the average of three numbers is %f\n", average(10,20,60));
    return 0;
}