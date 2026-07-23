#include <stdio.h>

int main(){
    int arr[10];
    int x;
    printf("enter the number \n");
    scanf("%d",&x);
    
    for (int i = 0; i < 10; i++)
    {
        arr[i]= x * (i+1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("the value of %d X %d = %d \n",x, i+1, arr[i]);
        
    }
    
    return 0;
}