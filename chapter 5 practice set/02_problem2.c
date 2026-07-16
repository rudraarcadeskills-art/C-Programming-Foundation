#include <stdio.h>

float c2f(float);

float c2f(float c){
    return (9.0/5.0)*c + 32.0;
}

int main(){
    float c = 36.0;
    printf("the temperature in fahrenheit for %f is %.2f\n",c, c2f(c));

    return 0;
}