#include <stdio.h>

int main(){
    int i = 5;
    printf("the value of i is %d", i);

    i = i + 5;  //10
    printf("\nthe value of i is %d", i);

    //i++; //11
    printf("\nthe value of i is %d", i++); // 10
    printf("\nthe value of i is %d", i); // 11

    i +=2; // same as i = i+2; //13
    printf("\nthe value of i is %d", i);

    // i++ prints first and then increments (post-increment operator)
    // ++i increments first and then prints (pre-increment operator)

    return 0;
}