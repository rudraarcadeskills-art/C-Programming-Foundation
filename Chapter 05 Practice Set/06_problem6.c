#include <stdio.h>
int sum_natural(int);

int sum_natural(int n){
    if(n==1){
        return 1;
    }
    // 1 + 2+ 3+ ... + n-1 + n ;
    // sum(n)= sum(n-1)+n ;
    return sum_natural(n-1)+n;
}
int main(){
    int n = 1025;
    printf("the sum of first %d natural numbers is %d\n", n ,sum_natural(n));
    return 0;
}