#include <stdio.h>

int main(){
    //int lenght = 999999999999999999999999999;
    //int breadth = 65494266768767867867868;

    int length, breadth;

    printf("enter length\n");
    scanf("%d", &length);

    printf("enter breadth\n");
    scanf("%d", &breadth);

    printf("the area of this rectangle is %d", length*breadth);
    return 0;
}