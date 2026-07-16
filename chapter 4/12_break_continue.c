#include <stdio.h>

int main(){
    for (int i = 0; i < 15; i++)
    {
        if(i==5){
           // break; // exit the loop now!!
           continue; // skip this iteration now!!
        }
        printf("\ni is %d",i);
    }
    printf("\nfor loop is done!");
    return 0;
}