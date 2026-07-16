// https://www.ascii-code.com/

#include <stdio.h>

int main(){
    char ch ;
    printf("Enter the character : %c \n", ch);
    scanf("%c",&ch);
    printf("the ASCII value of the character is : %d", ch);
    // 97 - 122 for small letters
    // 65 - 90 for capital letters
    if(ch >=97 && ch <=122){
        printf("\n the character is lowercase");
    }
    else{
        printf("\n the character is uppercase");
    }
    return 0;
}