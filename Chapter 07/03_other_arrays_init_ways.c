#include <stdio.h>

int main(){
    // int cgpa[]={7,8,5}; // we can write like this also without giving the size of the array
    int cgpa[3]={7,8,5};
    for (int i = 0; i < 3; i++)
    {
        printf("the cgpa of student %d is %d\n", i+1 , cgpa[i]);
    }
    
    return 0;
}