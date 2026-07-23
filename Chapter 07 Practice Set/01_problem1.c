#include <stdio.h>

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int *ptr= arr;
    for (int i = 0; i < 10; i++)
    {
        printf("the value of arr is %d\n", arr[i]);
    }
    printf("the value of address %u ptr is %d\n",ptr+2,*ptr+2);
    return 0;
}
